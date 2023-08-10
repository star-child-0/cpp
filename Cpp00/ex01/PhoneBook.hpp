/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:11:44 by anvannin          #+#    #+#             */
/*   Updated: 2023/08/09 18:20:23 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <stdlib.h>
# include <iomanip>
# include <cstdio>

class PhoneBook
{
	private:
		int		index;
		Contact contacts[8];

		bool	isNumber(std::string s);
		void	increaseIndex();
		int		getHighestId();
		int		length();
	public:
		PhoneBook();

		bool	validCommand(std::string command);
		void	addContact();
		void	searchContact();
};

#endif
