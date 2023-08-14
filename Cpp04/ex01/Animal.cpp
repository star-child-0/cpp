/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:57:43 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 16:33:23 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal constructor called." << std::endl;
	_type = "Animal";
}

Animal::Animal(std::string type) {
	std::cout << "Animal constructor called." << std::endl;
	_type = type;
}

Animal::Animal(Animal const& src) {
	std::cout << "Animal copy constructor called." << std::endl;
	*this = src;
}

Animal&	Animal::operator=(Animal const& src) {
	std::cout << "Animal assign operator called." << std::endl;
	if (this != &src){
		_type = src._type;
	}
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called." << std::endl;
}

std::string	Animal::getType(void) const {
	return (_type);
}

void	Animal::makeSound(void) const {
	std::cout << "..." << std::endl;
}
