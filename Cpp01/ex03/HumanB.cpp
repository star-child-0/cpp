/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:16:49 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 08:46:09 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	_name = name;
}

void	HumanB::setWeapon(Weapon& weapon){
	_weapon = &weapon;
}

void	HumanB::attack(void){
	std::string const&	weapon = _weapon->getType();

	std::cout	<< _name << " attacks with his "
				<< weapon << std::endl;
}
