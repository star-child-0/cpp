/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:04:30 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 19:43:50 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called." << std::endl;
	_type = "default";
}

AMateria::AMateria(std::string const & type) {
	std::cout << "AMateria constructor called." << std::endl;
	_type = type;
}

AMateria::AMateria(AMateria const & src) {
	std::cout << "AMateria copy constructor called." << std::endl;
	*this = src;
}

AMateria& AMateria::operator=(AMateria const & src) {
	std::cout << "AMateria assignation operator called." << std::endl;
	if (this != &src){
		_type = src._type;
	}
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called." << std::endl;
}

std::string const &	AMateria::getType() const {
	return (_type);
}
