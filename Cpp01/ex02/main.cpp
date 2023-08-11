/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:06:16 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 08:13:01 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout	<< &str << std::endl
				<< ptr << std::endl
				<< &ref << std::endl
				<< str << std::endl
				<< *ptr << std::endl
				<< ref << std::endl;

	return (0);
}
