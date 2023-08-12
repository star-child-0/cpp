/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:04:10 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/12 15:05:38 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0){}

Point::Point(float const x, float const y): _x(x), _y(y){}

Point::Point(Point const &src) : _x(src._x), _y(src._y){}

Point &Point::operator=(Point const &src){
	if (this != &src){
		_x = src._x;
		_y = src._y;
	}
	return (*this);
}

Point::~Point(){}

const Fixed Point::getX() const {
	return (_x);
}

const Fixed Point::getY() const {
	return (_y);
}
