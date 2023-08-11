/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:10:49 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 15:31:25 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	_n;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed& operator=(const Fixed &src);
		~Fixed();

		int	getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
