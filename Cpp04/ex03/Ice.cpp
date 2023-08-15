/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:11:43 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/15 15:47:11 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const & src) : AMateria(src) {
	*this = src;
}

Ice& Ice::operator=(Ice const & src) {
	if (this != &src){
		AMateria::operator=(src);
	}
	return (*this);
}

Ice::~Ice() {}

AMateria*	Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
