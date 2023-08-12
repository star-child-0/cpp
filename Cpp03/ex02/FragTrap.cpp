/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:11:03 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/12 18:55:14 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "FragTrap default constructor called." << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name){
	std::cout << "FragTrap constructor called." << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src){
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = src;
}

FragTrap	&FragTrap::operator=(FragTrap const & src){
	std::cout << "FragTrap assign operator called." << std::endl;
	if (this != &src){
		_name = src._name;
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_attackDamage = src._attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::attack(std::string const & target){
	std::cout	<< "FragTrap " << _name << " attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount){
	std::cout	<< "FragTrap " << _name << " has taken "
				<< amount << " points of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount){
	std::cout	<< "FragTrap " << _name << " is getting repaired for "
				<< amount << " hit points!" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << _name << " gives you a high five!" << std::endl;
}
