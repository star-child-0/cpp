/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:29:10 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 19:29:26 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called." << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	std::cout << "MateriaSource copy constructor called." << std::endl;
	*this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & src) {
	std::cout << "MateriaSource assignation operator called." << std::endl;
	if (this != &src){
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called." << std::endl;
}
