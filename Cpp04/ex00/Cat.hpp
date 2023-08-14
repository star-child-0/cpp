/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:00:49 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 16:24:17 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Cat : public Animal{
	public:
		Cat(void);
		Cat(Cat const& src);
		~Cat(void);
		Cat&	operator=(Cat const& src);

		void	makeSound(void) const;
};
