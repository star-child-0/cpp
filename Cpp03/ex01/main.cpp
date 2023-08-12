/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:19:00 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/12 16:58:28 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap("Marvin");
	ScavTrap	scav("BeepBoop");

	clap.attack("Arthur");
	clap.takeDamage(5);
	clap.beRepaired(5);

	scav.attack("Arthur");
	scav.takeDamage(5);
	scav.beRepaired(5);
	scav.guardGate();
	return (0);
}
