/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:22:27 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 16:23:22 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void){
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(std::string type){
	std::cout << "WrongCat constructor called." << std::endl;
	_type = type;
}

WrongCat::WrongCat(WrongCat const& src){
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = src;
}

WrongCat&	WrongCat::operator=(WrongCat const& src){
	std::cout << "WrongCat assign operator called." << std::endl;
	if (this != &src){
		_type = src._type;
	}
	return (*this);
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat destructor called." << std::endl;
}

void	WrongCat::makeSound(void) const{
	std::cout << "Wrong miao" << std::endl;
}
