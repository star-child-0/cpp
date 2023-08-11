/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:03:49 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 11:32:08 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug(void){
	std::cout << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void){
	std::cout << " I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Harl::_warning(void){
	std::cout << " I think I deserve some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void	Harl::_error(void){
	std::cout << " This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level){
	int			i = 0;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*f[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	while (i < 4){
		if (levels[i] == level)
			(this->*f[i])();
		i++;
	}
}
