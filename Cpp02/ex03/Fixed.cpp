/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:11:25 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 17:43:01 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors -------------------------------------------------------------->
Fixed::Fixed(){
	_n = 0;
}

Fixed::Fixed(const int n){
	_n = n << _bits;
}

Fixed::Fixed(const float n){
	_n = roundf(n * (1 << _bits));
}

Fixed::Fixed(Fixed const &src){ // Copy constructor
	*this = src;
}

Fixed& Fixed::operator=(Fixed const &src){ // Assignment operator
	_n = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(){ // Destructor
}

// Member functions ---------------------------------------------------------->
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

// Static functions ---------------------------------------------------------->
Fixed	&Fixed::min(Fixed &a, Fixed &b){
	return (a < b ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b){
	return (a < b ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b){
	return (a > b ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b){
	return (a > b ? a : b);
}

// Comparison overload operators --------------------------------------------->
bool	Fixed::operator>(const Fixed &a) const{
	return (_n > a.getRawBits());
}

bool	Fixed::operator<(const Fixed &a) const{
	return (_n < a.getRawBits());
}

bool	Fixed::operator>=(const Fixed &a) const{
	return (_n >= a.getRawBits());
}

bool	Fixed::operator<=(const Fixed &a) const{
	return (_n <= a.getRawBits());
}

bool	Fixed::operator==(const Fixed &a) const{
	return (_n == a.getRawBits());
}

bool	Fixed::operator!=(const Fixed &a) const{
	return (_n != a.getRawBits());
}

// Overload arithmetic operators --------------------------------------------->
Fixed	Fixed::operator+(const Fixed &a) const{
	return (Fixed(toFloat() + a.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &a) const{
	return (Fixed(toFloat() - a.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &a) const{
	return (Fixed(toFloat() * a.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &a) const{
	return (Fixed(toFloat() / a.toFloat()));
}

// Overload increment operators ---------------------------------------------->
Fixed	Fixed::operator++(int){
	Fixed	res;
	res._n = this->_n++;
	return (res);
}

Fixed	Fixed::operator++(void){
	_n++;
	return (*this);
}

Fixed	Fixed::operator--(int){
	Fixed	res;
	res._n = this->_n--;
	return (res);
}

Fixed	Fixed::operator--(void){
	this->_n--;
	return (*this);
}

// Ostream overload ---------------------------------------------------------->
std::ostream	&operator<<(std::ostream &output, Fixed const &other){
	output << other.toFloat();
	return (output);
}
