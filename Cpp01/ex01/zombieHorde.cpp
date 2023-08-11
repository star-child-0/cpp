/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:55:43 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/10 16:41:49 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int n, std::string name ){
	Zombie*	zombies = new Zombie[n];
	int		i = -1;

	while (++i < n)
		zombies[i].setName(name);
	return (zombies);
}
