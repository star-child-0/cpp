/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:09:25 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 15:54:25 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);
	a = Fixed(1234.4321f);

	std::cout	<< "a is " << a << std::endl
				<< "b is " << b << std::endl
				<< "c is " << c << std::endl
				<< "d is " << d << std::endl
				<< "a is " << a.toInt() << " as integer" << std::endl
				<< "b is " << b.toInt() << " as integer" << std::endl
				<< "c is " << c.toInt() << " as integer" << std::endl
				<< "d is " << d.toInt() << " as integer" << std::endl;
	return (0);
}
