/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:12:02 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/09 14:36:46 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	Contact::getId(){
	return (id);
}

void	Contact::setId(int id){
	Contact::id = id;
}

std::string	Contact::getFirstName(){
	return (first_name);
}

void	Contact::setFirstName(std::string first_name){
	Contact::first_name = first_name;
}

std::string	Contact::getLastName(){
	return (last_name);
}

void	Contact::setLastName(std::string last_name){
	Contact::last_name = last_name;
}

std::string	Contact::getNickname(){
	return (nickname);
}

void	Contact::setNickname(std::string nickname){
	Contact::nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phone_number){
	Contact::phone_number = phone_number;
}

void	Contact::setDarkestSecret(std::string darkest_secret){
	Contact::darkest_secret = darkest_secret;
}

void	Contact::printContact()
{
	std::cout	<< "First name:       " << first_name << std::endl
				<< "Last name:        " << last_name << std::endl
				<< "Nickname:         " << nickname << std::endl
				<< "Phone number:     " << phone_number << std::endl
				<< "Darkest secret:   " << darkest_secret << std::endl;
}
