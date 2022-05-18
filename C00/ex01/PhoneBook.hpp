/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:33:55 by lmasson           #+#    #+#             */
/*   Updated: 2022/05/17 18:11:37 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream> //librairie pour cout
#include <string>
#include "Contact.hpp"

class PhoneBook{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add_contact();
		void	search_contact();
	private:
		Contact _contact[8];
};

#endif
