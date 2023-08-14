/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:47:57 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 14:39:13 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name) {
	std::cout << "ScavTrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != &other){
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(std::string const& target) {
	if (_energyPoints <= 0) {
		std::cout << "ScavTrap " << _name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout	<< "ScavTrap " << _name << " attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout	<< "ScavTrap " << _name << " has taken "
				<< amount << " points of damage!" << std::endl;
	_hitPoints -= amount;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (_energyPoints <= 0) {
		std::cout << "ScavTrap " << _name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout	<< "ScavTrap " << _name << " is getting repaired for "
				<< amount << " hit points!" << std::endl;
	_hitPoints += amount;
	_energyPoints--;
}

void ScavTrap::guardGate() {
	if(_energyPoints <= 0){
		std::cout << "ScavTrap " << _name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " is guarding the gate!" << std::endl;
}
