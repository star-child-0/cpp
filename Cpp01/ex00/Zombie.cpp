/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:14:59 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/10 16:25:57 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	Zombie::_name = name;
	std::cout << Zombie::_name << " has risen." << std::endl;
}

Zombie::~Zombie(){
	std::cout << Zombie::_name << " is dead (again)." << std::endl;
}

void Zombie::announce( void )
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
