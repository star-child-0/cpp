/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:14:46 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/10 15:51:43 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie*	zombie = newZombie("Thriller");
	zombie->announce();
	randomChump("Night");
	delete zombie;
	return (0);
}
