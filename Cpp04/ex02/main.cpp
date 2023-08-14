/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:53:06 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/14 18:59:00 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void){
	Cat	*cat = new Cat();
	cat->getBrain()->setIdea("I am a cat");
	std::cout << "First cat:" << std::endl;
	cat->getBrain()->getIdeas();

	Cat	*cat2 = new Cat(*cat);
	std::cout << "Second cat:" << std::endl;
	cat2->getBrain()->getIdeas();

	delete cat;
	delete cat2;

	Dog	*dog = new Dog();
	dog->getBrain()->setIdea("I am a dog");
	std::cout << "First dog:" << std::endl;
	dog->getBrain()->getIdeas();

	Dog	*dog2 = new Dog(*dog);
	std::cout << "Second dog:" << std::endl;
	dog2->getBrain()->getIdeas();

	delete dog;
	delete dog2;
	return (0);
}
