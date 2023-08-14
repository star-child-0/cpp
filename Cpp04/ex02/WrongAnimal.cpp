/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:22:14 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 16:09:09 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
	std::cout << "WrongAnimal constructor called." << std::endl;
	_type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src){
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = src;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& src){
	std::cout << "WrongAnimal assign operator called." << std::endl;
	if (this != &src){
		_type = src._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "WrongAnimal destructor called." << std::endl;
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "..." << std::endl;
}
