/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:10:09 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 19:14:42 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(Cure const & src);
		Cure& operator=(Cure const & src);
		~Cure();

		AMateria*	clone() const;
		void		use(ICharacter& target);
};
