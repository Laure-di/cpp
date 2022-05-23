/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:10:11 by lmasson           #+#    #+#             */
/*   Updated: 2022/05/23 20:19:39 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phone;
	std::string	answer("");

	std::cout <<  FGREEN("Welcome on your on personalize phone book. Here are the action you can do :") << std::endl;
	std::cout << FYELLOW("SEARCH a contact by typing SEARCH and press enter") << std::endl;
	std::cout << FYELLOW("ADD a contact by typing ADD and press enter") << std::endl;
	std::cout << FYELLOW("EXIT the program by typing EXIT and press enter") << std::endl;
	while (answer != "EXIT")
	{
		std::cout << FGREEN("What would you like to do? ");
		getline(std::cin, answer);
		if (answer == "ADD")
			phone.addContact();
		if (answer == "SEARCH")
			phone.searchContact();

	}
	return (0);
}
