/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 20:19:00 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/12 18:54:52 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	robot("Frag");

	robot.attack("target");
	robot.takeDamage(10);
	robot.beRepaired(10);
	robot.highFivesGuys();
	return (0);
}
