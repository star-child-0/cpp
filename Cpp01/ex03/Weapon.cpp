/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:16:26 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 08:33:11 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	_type = type;
}

std::string const&	Weapon::getType(void) const{
	const std::string&	res = _type;
	return (res);
}

void	Weapon::setType(std::string type){
	_type = type;
}
