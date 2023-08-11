/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:16:29 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 08:33:02 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string			_type;
	public:
		Weapon(std::string type);
		std::string const&	getType(void) const;
		void				setType(std::string type);
};

#endif
