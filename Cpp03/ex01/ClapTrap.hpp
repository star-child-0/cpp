/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:19:24 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/12 16:53:14 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& copy);
		ClapTrap	&operator=(ClapTrap const& copy);
		~ClapTrap();

		void	attack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
