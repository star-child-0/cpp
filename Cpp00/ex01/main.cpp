/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:11:47 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/09 18:22:48 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void){
	PhoneBook phoneBook;
	std::string command;

	while (true){
		std::cout << "Enter command: ";
		if (std::cin.eof()){
			std::cout << std::endl;
			break ;
		}

		getline(std::cin, command);

		if (!phoneBook.validCommand(command))
			continue ;
		else if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			break ;
	}
	return (0);
}
