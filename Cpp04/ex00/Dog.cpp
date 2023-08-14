/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:01:07 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 16:26:50 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog( Dog const & src ) : Animal("Dog") {
	std::cout << "Dog copy constructor called." << std::endl;
	*this = src;
}

Dog &Dog::operator=( Dog const & src ) {
	std::cout << "Dog assign operator called." << std::endl;
	if (this != &src){
		_type = src._type;
	}
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound( void ) const {
	std::cout << "Bau" << std::endl;
}
