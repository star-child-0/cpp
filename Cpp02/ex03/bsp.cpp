/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 17:45:04 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 18:46:09 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	calcArea(Point const a, Point const b, Point const c){
	return ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY())
			+ c.getX() * (a.getY() - b.getY())) / 2);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point){
	Fixed aArea = calcArea(a, b, c);
	if (aArea < 0)
		aArea = aArea * -1;
	Fixed bArea = calcArea(a, b, point);
	if (bArea < 0)
		bArea = bArea * -1;
	Fixed cArea = calcArea(a, point, c);
	if (cArea < 0)
		cArea = cArea * -1;
	Fixed dArea = calcArea(point, b, c);
	if (dArea < 0)
		dArea = dArea * -1;
	return (aArea == bArea + cArea + dArea);
}
