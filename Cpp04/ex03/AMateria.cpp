/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:04:30 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/15 15:46:33 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	_type = "default";
}

AMateria::AMateria(std::string const & type) {
	_type = type;
}

AMateria::AMateria(AMateria const & src) {
	*this = src;
}

AMateria& AMateria::operator=(AMateria const & src) {
	if (this != &src){
		_type = src._type;
	}
	return (*this);
}

AMateria::~AMateria() {}

std::string const &	AMateria::getType() const {
	return (_type);
}

void	AMateria::use(ICharacter& target) {
	std::cout	<< "* This AMateria doesen't have any properties! "
				<< target.getName() << " is unaffected *" << std::endl;
}
