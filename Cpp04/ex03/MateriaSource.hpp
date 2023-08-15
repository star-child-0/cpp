/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:28:40 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/15 15:34:59 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria	*_materia[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		MateriaSource &operator=(MateriaSource const & src);
		~MateriaSource();

		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};
