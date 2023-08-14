/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:26:03 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 19:26:52 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << "Character default constructor called." << std::endl;
	_name = "default";
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
}

Character::Character(std::string const & name) {
	std::cout << "Character constructor called." << std::endl;
	_name = name;
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
}

Character::Character(Character const & src) {
	std::cout << "Character copy constructor called." << std::endl;
	*this = src;
}

Character& Character::operator=(Character const & src) {
	std::cout << "Character assignation operator called." << std::endl;
	if (this != &src){
		_name = src._name;
		_inventory[0] = src._inventory[0];
		_inventory[1] = src._inventory[1];
		_inventory[2] = src._inventory[2];
		_inventory[3] = src._inventory[3];
	}
	return (*this);
}

Character::~Character() {
	std::cout << "Character destructor called." << std::endl;
}

std::string const & Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m) {
	int i = 0;
	while (i < 4 && _inventory[i] != NULL)
		i++;
	if (i < 4)
		_inventory[i] = m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
}
