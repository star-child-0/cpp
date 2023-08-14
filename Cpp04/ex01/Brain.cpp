/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:46:27 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 18:48:26 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called." << std::endl;
	_ideasIndex = 0;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "";
}

Brain::Brain(Brain const& copy){
	std::cout << "Brain copy constructor called." << std::endl;
	_ideasIndex = copy._ideasIndex;
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
}

Brain& Brain::operator=(Brain const& copy){
	std::cout << "Brain assign operator called." << std::endl;
	if (this != &copy){
		for (int i = 0; i < _ideasIndex; i++)
			_ideas[i] = copy._ideas[i];
		_ideasIndex = copy._ideasIndex;
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor called." << std::endl;
}

void	Brain::getIdeas(void){
	for (int i = 0; i < _ideasIndex; i++)
		std::cout << _ideas[i] << std::endl;
}

void	Brain::setIdea(std::string idea){
	_ideas[_ideasIndex] = idea;
	_ideasIndex++;
}
