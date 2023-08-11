/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:10:49 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 17:36:37 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <cmath>
# include <iostream>

class Fixed
{
	private:
		int	_n;
		static const int _bits = 8;
	public:
		// Constructors ------------------------------------------------------->
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &src); // Copy constructor
		Fixed& operator=(const Fixed &src); // Assignment operator
		~Fixed(); // Destructor

		// Member functions --------------------------------------------------->
		int	getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		// Static functions --------------------------------------------------->
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);

		// Comparison overload operators ------------------------------------->
		bool	operator>(const Fixed &a) const;
		bool	operator<(const Fixed &a) const;
		bool	operator>=(const Fixed &a) const;
		bool	operator<=(const Fixed &a) const;
		bool	operator==(const Fixed &a) const;
		bool	operator!=(const Fixed &a) const;
		// Arithmetic overload operators ------------------------------------->
		Fixed	operator+(const Fixed &a) const;
		Fixed	operator-(const Fixed &a) const;
		Fixed	operator*(const Fixed &a) const;
		Fixed	operator/(const Fixed &a) const;
		// Increment / Decrement overload operators --------------------------->
		Fixed	operator++(int);
		Fixed	operator++(void);
		Fixed	operator--(int); // Increment / Decrement
		Fixed	operator--(void);
};

// Ostream overload ---------------------------------------------------------->
std::ostream	&operator<<(std::ostream &output, Fixed const &other);
