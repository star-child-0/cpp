/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:10:49 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 15:56:14 by anvannin         ###   ########.fr       */
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
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &src);
		Fixed& operator=(const Fixed &src);
		~Fixed();

		int	getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &output, Fixed const &other);
