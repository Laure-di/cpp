/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:52:16 by lmasson           #+#    #+#             */
/*   Updated: 2022/05/23 21:02:29 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::_totalContact = 0;

PhoneBook::PhoneBook(void) : _contact()
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::setContact(Contact contact)
{
	int		    index(_totalContact);
	std::string	answer("");

	if (7 < index)
	{
		std::cout << FRED("By adding this contact, you will erase the last contact of the list.");
		std::cout << FRED("To pursue this action type yes and press enter");
		std::cout << FRED("to drop your action press enter with any other entry") << std::endl;
		getline(std::cin, answer);
		if (answer != "yes")
		{
			std::cout << FGREEN("You have dropped your action") << std::endl;
			return ;
		}
		index = 7;
	}
	this->_contact[index] = contact;
	std::cout << FGREEN("[SUCCESS] Your contact has been added to your phone book!");
	std::cout << FGREEN("Congratulation you have a new friend.") << std::endl;
	return ;
}

Contact PhoneBook::getContact(int index) const
{
	return (this->_contact[index]);
}

bool	PhoneBook::_isValidNumber(std::string phoneNumber)
{
	int	i(0);

	while (phoneNumber[i])
	{
		if (!isdigit(phoneNumber[i]))
		{
			std::cout << FRED("The information you enter is not valid. It must be a number or digit.") << std::endl;
			return (false);
		}
		i++;
	}
	return (true);
}

std::string	PhoneBook::_phoneNumberCheck(void)
{
	std::string answer("phone number");
	do
	{
		std::cout << FYELLOW("Enter phone number's contact") << std::endl;
		getline(std::cin, answer);
	} while (!PhoneBook::_isValidNumber(answer) || PhoneBook::_isAnswerEmpty(answer));
	return (answer);
}

bool	PhoneBook::_isAnswerEmpty(std::string answer)
{
	int	i(0);

	while (answer[i])
	{
		if (!isspace(answer[i]))
			return (false);
		i++;
	}
	std::cout << FRED("This field can not be empty") << std::endl;
	return (true);
}

std::string	PhoneBook::_infosCheck(std::string question)
{
	std::string answer;

	do
	{
		std::cout << question << std::endl;
		getline(std::cin, answer);
	} while (PhoneBook::_isAnswerEmpty(answer));
	return (answer);
}

void	PhoneBook::addContact(void)
{
	Contact		contact;
	std::string	answer;

	answer = PhoneBook::_infosCheck(FYELLOW("Enter last name's contact"));
	contact.setLastName(answer);
	answer = PhoneBook::_infosCheck(FYELLOW("Enter first name's contact"));
	contact.setFirstName(answer);
	answer = PhoneBook::_infosCheck(FYELLOW("Enter nickname's contact"));
	contact.setNickname(answer);
	answer = PhoneBook::_phoneNumberCheck();
	contact.setPhoneNumber(answer);
	answer = PhoneBook::_infosCheck(FYELLOW("Enter darkest secret's contact"));
	contact.setDarkestSecret(answer);
	contact.setIsFill(true);
	this->setContact(contact);
	_totalContact++;
}

void	PhoneBook::_printContactInfo(std::string info)
{
	std::string	format;

	format = info;
	if (10 < info.size())
		format = info.substr(0, 9) + '.';
	std::cout << std::setw(10);
	std::cout << format;
}

void	PhoneBook::showAllContacts(void) const
{
	int	i(0);

	while (this->_contact[i].getIsFill())
	{
		std::cout << std::setw(10);
		std::cout << "index " << i;
		std::cout << "|";
		PhoneBook::_printContactInfo(this->_contact[i].getFirstName());
		std::cout << "|";
		PhoneBook::_printContactInfo(this->_contact[i].getLastName());
		std::cout << "|";
		PhoneBook::_printContactInfo(this->_contact[i].getNickname());
		std::cout << "|" << std::endl;
		i++;
	}
}

void	PhoneBook::showContact(int index) const
{
	Contact contact;

	contact = this->getContact(index);
	std::cout << "Index: " << index << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

int	PhoneBook::_find_index(void)
{
	std::string	answer;
	int	index(0);

	do
	{
		std::cout << FGREEN("Which contact would like to consult? Enter his index number and press ENTER") << std::endl;
		getline(std::cin, answer);
		if (answer == "EXIT")
		{
			index = -1;
			break;
		}
		index = std::atoi(answer.c_str());
		if (index < 0 || 7 < index)
			std::cout << FRED("The minimun index is 0 and the maximun is 7") << std::endl;
	} while (index < 0 || 7 < index || !PhoneBook::_isValidNumber(answer) || PhoneBook::_isAnswerEmpty(answer));

	return (index);
}

int	PhoneBook::countContact(void) const
{
	int	i(0);

	while (this->_contact[i].getIsFill())
		i++;
	return (i);
}

void	PhoneBook::searchContact(void) const
{

	int	index;

	if (_totalContact != 0)
	{
		this->showAllContacts();
		index = PhoneBook::_find_index();
		if (index == -1)
			return ;
		while (this->_contact[index].getIsFill() == false)
		{
			std::cout << FRED("There is not contact register at this index.") << std::endl;
			index = PhoneBook::_find_index();
			if (index == -1)
				return;
		}
		if (0 <= index)
			this->showContact(index);
	}
	else
		std::cout << FRED("You have no contact register") << std::endl;
}
