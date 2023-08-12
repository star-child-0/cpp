/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:20:33 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/12 15:42:45 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const& copy){
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const& copy){
	if (this != &copy){
		_name = copy._name;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){}

void	ClapTrap::attack(std::string const& target){
	if (_energyPoints <= 0){
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints <= 0){
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " is getting repaired for " << amount << " hit points!" << std::endl;
	_energyPoints -= 1;
}
