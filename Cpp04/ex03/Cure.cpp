/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:10:01 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 19:14:49 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src) {
	std::cout << "Cure copy constructor called." << std::endl;
	*this = src;
}

Cure& Cure::operator=(Cure const & src) {
	std::cout << "Cure assignation operator called." << std::endl;
	if (this != &src){
		AMateria::operator=(src);
	}
	return (*this);
}

Cure::~Cure() {
	std::cout << "Cure destructor called." << std::endl;
}

AMateria*	Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
