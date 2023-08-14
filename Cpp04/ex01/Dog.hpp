/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:00:58 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 17:57:34 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain*	_brain;
	public:
		Dog(void);
		Dog(Dog const& src);
		Dog&	operator=(Dog const& src);
		~Dog(void);

		Brain*	getBrain(void) const;
		void	makeSound(void) const;
};
