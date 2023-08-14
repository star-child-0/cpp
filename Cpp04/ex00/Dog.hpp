/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:00:58 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 16:26:03 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog(void);
		Dog(Dog const& src);
		Dog&	operator=(Dog const& src);
		~Dog(void);

		void	makeSound(void) const;
};
