/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:19:00 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/12 15:47:19 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	robot("Marvin");

	robot.attack("Arthur");
	robot.takeDamage(5);
	robot.beRepaired(5);
	return (0);
}
