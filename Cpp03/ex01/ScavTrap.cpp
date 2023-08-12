/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:47:57 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/12 17:51:10 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name) {
	std::cout << "ScavTrap constructor called" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &other){
    }
    return *this;
}
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(std::string const& target) {
	std::cout	<< "ScavTrap " << name << " attacks " << target << ", causing "
				<< attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout	<< "ScavTrap " << name << " has taken "
				<< amount << " points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout	<< "ScavTrap " << name << " is getting repaired for "
				<< amount << " hit points!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is guarding the gate!" << std::endl;
}
