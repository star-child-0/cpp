/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:12:13 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/09 11:12:14 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	scream(int ac, char **av){
	int	i = 0;
	int	j;

	while (++i < ac){
		j = -1;
		while (av[i][++j])
			av[i][j] = std::toupper(av[i][j]);

		if (i < ac - 1)
			std::cout << av[i] << " ";
		else
			std::cout << av[i] << std::endl;
	}
}

int	main(int ac, char **av){
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		scream(ac, av);
	return (0);
}
