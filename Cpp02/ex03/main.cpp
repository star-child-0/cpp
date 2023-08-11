/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:09:25 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 18:47:32 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void){
	Point triangle[3] = {
		Point(0.0f, 0.0f),
		Point(10.0f, 0.0f),
		Point(5.0f, 10.0f)
	};
	Point point(5.0f, 5.0f); // inside

	std::cout	<< (bsp(triangle[0], triangle[1], triangle[2], point)
					? "Point is inside of triangle1"
					: "Point is outside of triangle1"
				) << std::endl;

	Point triangle2[3] = {
		Point(0.0f, 0.0f),
		Point(10.0f, 0.0f),
		Point(5.0f, 10.0f)
	};
	Point point2(5.0f, 15.0f); // outside

	std::cout	<< (bsp(triangle2[0], triangle2[1], triangle2[2], point2)
					? "Point is inside of triangle2"
					: "Point is outside of triangle2"
				) << std::endl;

	Point triangle3[3] = {
		Point(0.42f, 10.0f),
		Point(10.0f, 16.9f),
		Point(5.5f, 4.20f)
	};
	Point point3(5.1f, 7.0f); // inside

	std::cout	<< (bsp(triangle3[0], triangle3[1], triangle3[2], point3)
					? "Point is inside of triangle3"
					: "Point is outside of triangle3"
				) << std::endl;

	return (0);
}
