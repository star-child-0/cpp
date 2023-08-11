/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:11:25 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 17:43:47 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	_n = 0;
}

Fixed::Fixed(const int n){
	std::cout << "Int constructor called" << std::endl;
	_n = n << _bits;
}

Fixed::Fixed(const float n){
	std::cout << "Float constructor called" << std::endl;
	_n = roundf(n * (1 << _bits));
}

Fixed& Fixed::operator=(Fixed const &src){
	std::cout << "Copy assignment operator called" << std::endl;
	_n = src.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed const &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const{
	return (_n);
}

void	Fixed::setRawBits( int const raw ){
	_n = raw;
}

float	Fixed::toFloat( void ) const{
	return ((float)_n / (1 << _bits));
}

int	Fixed::toInt( void ) const{
	return (_n >> _bits);
}

std::ostream	&operator<<(std::ostream &output, Fixed const &other){
	output << other.toFloat();
	return (output);
}
