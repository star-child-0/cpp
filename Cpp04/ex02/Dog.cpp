/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:01:07 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 18:33:52 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Dog constructor called." << std::endl;
	_brain = new Brain();
}

Dog::Dog( Dog const & src ) : Animal("Dog") {
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}

Dog &Dog::operator=( Dog const & src ) {
	std::cout << "Dog assign operator called." << std::endl;
	if (this != &src){
		_type = src._type;
		_brain = new Brain(*src._brain);
	}
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called." << std::endl;
	delete _brain;
}

Brain	*Dog::getBrain( void ) const {
	return (_brain);
}

void	Dog::makeSound( void ) const {
	std::cout << "Bau" << std::endl;
}
