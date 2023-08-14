/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:22:32 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 16:09:14 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(WrongCat const& src);
		WrongCat&	operator=(WrongCat const& src);
		~WrongCat(void);

		void	makeSound(void) const;
};
