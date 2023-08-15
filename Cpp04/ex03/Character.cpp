/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:26:03 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/15 16:40:59 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	_name = "default";
	_inventoryIndex = 0;
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
		_stash[i] = NULL;
	}
}

Character::Character(std::string const & name) {
	_name = name;
	_inventoryIndex = 0;
	for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
		_stash[i] = NULL;
	}
}

Character::Character(Character const & src) {
	*this = src;
}

Character& Character::operator=(Character const & src) {
	if (this != &src){
		_name = src._name;
		for (int i = 0; i < 4; i++){
			_inventory[i] = src._inventory[i];
			_stash[i] = src._stash[i];
		}
	}
	return (*this);
}

Character::~Character() {
	for (int i = 0; i < 4; i++){
		if (_inventory[i] != NULL)
			delete _inventory[i];
		if (_stash[i] != NULL)
			delete _stash[i];
	}
}

std::string const & Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m) {
	if(_inventoryIndex >= 4){

		for (int i = 0; i < 4; i++){
			if (_stash[i] == NULL){
				std::cout	<< "* inventory is full, materia added to stash *"
							<< std::endl;
				_stash[i] = m;
				break ;
			}
			if (i == 3){
				std::cout << "* stash is full, materia discarded *" << std::endl;
				delete m;
			}
		}
		return;
	}

	for (int i = 0; i < 4; i++){
		if (this->_inventory[i] == NULL){
			this->_inventory[i] = m;
			std::cout << "* " << m->getType() << " materia equiped *" << std::endl;
			_inventoryIndex++;
			break ;
		}
	}
}

void Character::unequip(int idx) {
	if (_inventory[idx] != NULL){
		_stash[idx] = _inventory[idx];
		_inventory[idx] = NULL;
		std::cout << "* materia unequiped *" << std::endl;
	}
	else
		std::cout << "* no materia equiped in this slot *" << std::endl;
}

void	Character::toss(int idx) {
	if (_stash[idx] != NULL){
		delete _stash[idx];
		_stash[idx] = NULL;
		std::cout << "* materia tossed *" << std::endl;
	}
	else
		std::cout << "* no materia in this slot *" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target);
	else if (idx < 0 || idx > 3)
		std::cout << "* your inventory is not that big *" << std::endl;
	else
		std::cout << "* no materia equiped in this slot *" << std::endl;
}
