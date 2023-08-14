/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:11:43 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 19:14:31 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::Ice(Ice const & src) : AMateria(src) {
	std::cout << "Ice copy constructor called." << std::endl;
	*this = src;
}

Ice& Ice::operator=(Ice const & src) {
	std::cout << "Ice assignation operator called." << std::endl;
	if (this != &src){
		AMateria::operator=(src);
	}
	return (*this);
}

Ice::~Ice() {
	std::cout << "Ice destructor called." << std::endl;
}

AMateria*	Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
