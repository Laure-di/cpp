/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:18:18 by lmasson           #+#    #+#             */
/*   Updated: 2022/05/18 17:45:36 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() : _first_name(), _last_name(), _nickname(), _phone_number(), _darkest_secret()
{
}

Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret): _first_name(first_name), _last_name(last_name), _nickname(nickname), _phone_number(phone_number), _darkest_secret(darkest_secret)
{
}

Contact::Contact(Contact const& copy): _first_name(copy._first_name), _last_name(copy._last_name), _nickname(copy._nickname), _phone_number(copy._phone_number), _darkest_secret(copy._darkest_secret)
{
}

Contact::~Contact()
{
}

void	Contact::setFirstName(std::string first_name)
{
	this->_first_name = first_name;
}

void	Contact::setLastName(std::string last_name)
{
	this->_last_name = last_name;
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void	Contact::setDarkestSecret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_first_name);
}

std::string	Contact::getLastName(void) const
{
	return (this->_last_name);
}

std::string Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->_phone_number);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkest_secret);
}
