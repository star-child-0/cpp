/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:46:13 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 17:54:43 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
	private:
		std::string		_ideas[100];
		int				_ideasIndex;
	public:
		Brain();
		Brain(Brain const& copy);
		Brain& operator=(Brain const& copy);
		~Brain();

		void			getIdeas(void);
		void			setIdea(std::string idea);
};
