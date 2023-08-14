/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:25:42 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 19:25:54 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
	private:
		std::string		_name;
		AMateria*		_inventory[4];
		int				_count;
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & src);
		Character& operator=(Character const & src);
		~Character();

		std::string const &	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};
