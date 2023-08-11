/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:09:25 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 14:12:10 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;

	std::cout	<< a.getRawBits() << std::endl
				<< b.getRawBits() << std::endl
				<< c.getRawBits() << std::endl;
	return (0);
}
