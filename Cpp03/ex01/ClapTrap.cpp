/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:20:33 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/12 16:55:48 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	std::cout << "ClapTrap constructor called" << std::endl;
	ClapTrap::name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const& copy){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const& copy){
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &copy){
		name = copy.name;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(std::string const& target){
	if (energyPoints <= 0){
		std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout	<< "ClapTrap " << name << " attacks "
				<< target << ", causing " << attackDamage
				<< " points of damage!" << std::endl;
	energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount){
	std::cout	<< "ClapTrap " << name << " has taken "
				<< amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (energyPoints <= 0){
		std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout	<< "ClapTrap " << name << " is getting repaired for "
				<< amount << " hit points!" << std::endl;
	energyPoints -= 1;
}
