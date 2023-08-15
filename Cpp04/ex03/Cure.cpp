/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:10:01 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/15 15:46:59 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & src) : AMateria(src) {
	*this = src;
}

Cure& Cure::operator=(Cure const & src) {
	if (this != &src){
		AMateria::operator=(src);
	}
	return (*this);
}

Cure::~Cure() {}

AMateria*	Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
