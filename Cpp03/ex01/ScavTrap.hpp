/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:48:06 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/12 17:51:00 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	private:
	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(ScavTrap const &src);
		ScavTrap	&operator=(ScavTrap const & src);
		~ScavTrap();

		void	attack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	guardGate();
};

#endif
