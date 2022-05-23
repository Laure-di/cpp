/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:33:55 by lmasson           #+#    #+#             */
/*   Updated: 2022/05/23 20:40:29 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream> //librairie pour cout
#include <string>
#include <ctype.h>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

#define RST  "\x1B[0m"
#define GREEN  "\x1B[32m"
#define YELLOW  "\x1B[33m"
#define RED  "\x1B[31m"
#define FGREEN(x) GREEN x RST
#define FYELLOW(x) YELLOW x RST
#define FRED(x) RED x RST

class PhoneBook
{
	public:
		static int	_find_index(void);
		static void	_printContactInfo(std::string info);
		static std::string	_infosCheck(std::string question);
		static bool _isAnswerEmpty(std::string answer);
		static std::string	_phoneNumberCheck(void);
		static bool	_isValidNumber(std::string phoneNumber);

		PhoneBook(void);
		~PhoneBook(void);

		void	searchContact() const;
		void	addContact(void);
		void	showAllContacts(void) const;
		void	showContact(int index) const;
		int		countContact(void) const;
		//Setter
		void	setContact(Contact contact);
		//Getter
		Contact	getContact(int index) const;
	private:
		Contact _contact[8];
		static int _totalContact;
};

#endif
