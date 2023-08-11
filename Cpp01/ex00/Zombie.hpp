/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:15:01 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/10 15:44:05 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(std::string name);
		~Zombie();

		void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
