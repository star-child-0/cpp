/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:04:38 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/15 16:38:27 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void){
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");


	{ // use
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(5, *bob);
	}
	{ // full inventory
		tmp = src->createMateria("ice");
		bob->equip(tmp);
		tmp = src->createMateria("ice");
		bob->equip(tmp);
		tmp = src->createMateria("ice");
		bob->equip(tmp);
		tmp = src->createMateria("ice");
		bob->equip(tmp);
		tmp = src->createMateria("ice");
		bob->equip(tmp);
		tmp = src->createMateria("ice");
		bob->equip(tmp);
		tmp = src->createMateria("ice");
		bob->equip(tmp);
		tmp = src->createMateria("ice");
		bob->equip(tmp);
		tmp = src->createMateria("ice");
		bob->equip(tmp);
	}
	{ // unequip
		me->unequip(0);
		me->use(0, *bob);
	}
	{ // toss
		me->toss(0);
		me->use(0, *bob);
	}

	delete bob;
	delete me;
	delete src;
	return (0);
}
