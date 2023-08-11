/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:55:15 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/10 16:41:36 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie	*arr = zombieHorde(10, "Zombie");
	int i = -1;

	while (++i < 10)
		arr[i].announce();

	delete []arr;
	return (0);
}
