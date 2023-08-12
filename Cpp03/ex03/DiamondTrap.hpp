/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:25:42 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/12 18:31:39 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap	&operator=(DiamondTrap const & src);
		~DiamondTrap();

		using	ScavTrap::attack;
		using	FragTrap::takeDamage;
		using	ScavTrap::beRepaired;
		void	whoAmI(void);
};
