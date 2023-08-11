/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:48:04 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/11 11:01:52 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <string.h>

int	main(int ac, char **av)
{
	unsigned long	i;
	unsigned long	j;
	std::ifstream	readFile;
	std::ofstream	writeFile;
	std::string		line;
	std::string		substr;
	std::string		s1;
	std::string		s2;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (1);
	}

	s1 = av[2];
	s2 = av[3];
	readFile.open(av[1], std::ios::in);
	writeFile.open(strcat(av[1], ".replace"), std::ios::out);
	if (!readFile.is_open() || !writeFile.is_open())
	{
		std::cout << "Error opening file." << std::endl;
		return (1);
	}

	while (getline(readFile, line)){
		i = -1;
		while (++i < line.length()){
			if (line[i] == s1[0]){
				substr = line.substr(0, i) + s2;
				j = -1;
				while (line[i] == s1[++j])
					i++;
				line = substr + line.substr(i, line.length());
			}
		}
		writeFile << line << std::endl;
	}

	readFile.close();
	writeFile.close();
	return (0);
}
