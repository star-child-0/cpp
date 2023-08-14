/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:00:42 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 18:33:01 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat constructor called." << std::endl;
	_brain = new Brain();
}

Cat::Cat(Cat const& src) : Animal("Cat") {
	std::cout << "Cat copy constructor called." << std::endl;
	*this = src;
}

Cat&	Cat::operator=(Cat const& src) {
	std::cout << "Cat assign operator called." << std::endl;
	if (this != &src){
		_type = src._type;
		_brain = new Brain(*src._brain);
	}
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called." << std::endl;
	delete _brain;
}

Brain *Cat::getBrain(void) const {
	return this->_brain;
}

void	Cat::makeSound(void) const {
	std::cout << "Miao" << std::endl;
}
