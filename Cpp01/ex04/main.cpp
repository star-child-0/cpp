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

std::string	str_replace(std::string str, std::string s1, std::string s2)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	k;
	std::string		substr;

	i = 0;
	while (i < str.length())
	{
		j = 0;
		k = i;
		while (str[i] == s1[j] && j < s1.length())
		{
			i++;
			j++;
		}
		if (j == s1.length())
		{
			str.erase(k, j);
			str.insert(k, s2);
			i = k + s2.length();
		}
		else
			i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
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
		writeFile << str_replace(line, s1, s2) << std::endl;
	}

	readFile.close();
	writeFile.close();
	return (0);
}
