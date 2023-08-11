/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:09:25 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 17:40:54 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void){
	Fixed		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout	<< a << std::endl
				<< ++a << std::endl
				<< a << std::endl
				<< a++ << std::endl
				<< a << std::endl
				<< b << std::endl
				<< Fixed::max( a, b ) << std::endl;
	return (0);
}
