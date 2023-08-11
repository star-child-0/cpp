/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:16:46 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 08:37:19 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		*_weapon;
		std::string	_name;
	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack(void);
};

#endif
