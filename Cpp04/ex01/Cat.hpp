/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:00:49 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 18:27:04 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal{
	private:
		Brain*	_brain;
	public:
		Cat(void);
		Cat(Cat const& src);
		~Cat(void);
		Cat&	operator=(Cat const& src);

		Brain*	getBrain(void) const;
		void	makeSound(void) const;
};
