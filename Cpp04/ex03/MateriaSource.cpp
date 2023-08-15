/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:29:10 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/15 15:48:44 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	*this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & src) {
	if (this != &src){
		for (int i = 0; i < 4; i++)
			_materia[i] = src._materia[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete _materia[i];
}

void	MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < 4; i++)
		if (!_materia[i]){
			_materia[i] = materia;
			break ;
		}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
		if (_materia[i] && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	return (NULL);
}
