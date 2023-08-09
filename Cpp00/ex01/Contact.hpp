/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:11:52 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/09 14:09:12 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		int			getId();
		void		setId(int id);
		std::string	getFirstName();
		void		setFirstName(std::string first_name);
		std::string	getLastName();
		void		setLastName(std::string last_name);
		std::string	getNickname();
		void		setNickname(std::string nickname);
		void		setPhoneNumber(std::string phone_number);
		void		setDarkestSecret(std::string darkest_secret);

		void		printContact();
	private:
		int			id;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif
