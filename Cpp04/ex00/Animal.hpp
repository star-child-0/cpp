/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:57:41 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 16:39:31 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Animal{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const& src);
		virtual ~Animal(void);
		Animal&	operator=(Animal const& src);

		virtual std::string	getType(void) const;
		virtual void		makeSound(void) const;
};
