/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:11:36 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/09 16:48:45 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	index = 0;
}

bool	PhoneBook::isNumber(std::string s){
	for (int i = 0; i < (int)s.length(); i++){
		if (!isdigit(s[i]))
			return (false);
	}
	return (true);
}

int	PhoneBook::getHighestId(){
	int	i = -1;
	int	highest = 0;

	while (++i < 8)
		if (contacts[i].getId() > contacts[highest].getId())
			highest = i;
	return (highest);
}

int	PhoneBook::length(){
	int	i = 0;

	while (i < 8 && contacts[i].getFirstName() != "")
		i++;
	return (i);
}

bool	PhoneBook::validCommand(std::string command){
	if (command == "ADD" || command == "SEARCH" || command == "EXIT")
		return (true);
	std::cout	<< "Invalid command, insert a valid command" << std::endl
				<< "ADD: add a contact" << std::endl
				<< "SEARCH: search a contact" << std::endl
				<< "EXIT: exit the program" << std::endl;
	return (false);
}

void	PhoneBook::increaseIndex(){
	index++;
	if (index > 7)
		index = 0;
}

void	PhoneBook::addContact(){
	int id = index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	while (true){
		std::cout << "Enter first name: ";
		getline(std::cin, first_name);
		if (first_name == ""){
			std::cout << "Invalid first name" << std::endl;
			continue;
		}
		break;
	}

	while (true){
		std::cout << "Enter last name: ";
		getline(std::cin, last_name);
		if (last_name == ""){
			std::cout << "Invalid last name" << std::endl;
			continue;
		}
		break;
	}

	while (true){
		std::cout << "Enter nickname: ";
		getline(std::cin, nickname);
		if (nickname == ""){
			std::cout << "Invalid nickname" << std::endl;
			continue;
		}
		break;
	}

	while (true){
		std::cout << "Enter phone number: ";
		getline(std::cin, phone_number);
		if (phone_number == "" || !isNumber(phone_number)){
			std::cout << "Invalid phone number" << std::endl;
			continue;
		}
		break;
	}

	while (true){
		std::cout << "Enter darkest secret: ";
		getline(std::cin, darkest_secret);
		if (darkest_secret == ""){
			std::cout << "Invalid darkest secret" << std::endl;
			continue;
		}
		break;
	}

	if (id == 8)
		contacts[id].setId(getHighestId() + 1);
	else
		contacts[id].setId(id);
	contacts[id].setFirstName(first_name);
	contacts[id].setLastName(last_name);
	contacts[id].setNickname(nickname);
	contacts[id].setPhoneNumber(phone_number);
	contacts[id].setDarkestSecret(darkest_secret);
	increaseIndex();
}

void	PhoneBook::searchContact(){
	int i = -1;
	std::string index;
	std::string first_name;
	std::string last_name;
	std::string nickname;

	std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
	while (++i < 8){
		first_name = contacts[i].getFirstName();
		if (first_name.length() > 10)
			first_name = first_name.substr(0, 9) + ".";

		last_name = contacts[i].getLastName();
		if (last_name.length() > 10)
			last_name = last_name.substr(0, 9) + ".";

		nickname = contacts[i].getNickname();
		if (nickname.length() > 10)
			nickname = nickname.substr(0, 9) + ".";

		std::cout	<< std::right << std::setw(10) << i + 1 << "|"
					<< std::right << std::setw(10) << first_name << "|"
					<< std::right << std::setw(10) << last_name << "|"
					<< std::right << std::setw(10) << nickname << std::endl;
	}

	std::cout	<< "Search contact by index: ";
	getline(std::cin, index);
	if (!isNumber(index)){
		std::cout << "Invalid index" << std::endl;
		return ;
	}

	i = atoi(index.c_str());
	if (i < 1 || i > 8 || contacts[i - 1].getFirstName().length() <= 0){
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	else
		contacts[i - 1].printContact();

}
