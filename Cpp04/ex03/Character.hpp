/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:25:42 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/15 16:33:45 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string		_name;
		AMateria		*_inventory[4];
		AMateria		*_stash[4];
		int				_inventoryIndex;
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & src);
		Character& operator=(Character const & src);
		~Character();

		std::string const	&getName() const;
		void				equip(AMateria* m); // equip a new materia
		void				unequip(int idx); // move materia from inventory to stash
		void				toss(int idx); // delete materia from stash
		void				use(int idx, ICharacter& target); // use materia from inventory
};
