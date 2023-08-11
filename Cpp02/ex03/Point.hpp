/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:03:12 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 18:22:43 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;
	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &src);
		// Point	&operator=(const Point &src);
		~Point();

		const Fixed	getX() const;
		const Fixed	getY() const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif
