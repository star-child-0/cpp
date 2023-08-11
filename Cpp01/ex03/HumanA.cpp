/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:16:34 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 08:36:54 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon){
	_name = name;
	_weapon = &weapon;
}

void	HumanA::attack(void){
	std::string const&	weapon = _weapon->getType();

	std::cout	<< _name << " attacks with his "
				<< weapon << std::endl;
}
