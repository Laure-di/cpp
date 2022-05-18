/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:35:56 by lmasson           #+#    #+#             */
/*   Updated: 2022/05/18 17:45:34 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	public:
		Contact(void);
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		Contact::Contact(Contact const& copy);
		~Contact(void);
		//Setter
		void	setFirstName(std::string first_name);
		void	setLastName(std::string last_name);
		void	setNickName(std::string nickname);
		void	setPhoneNumber(std::string phone_number);
		void	setDarkestSecret(std::string darkest_secret);
		//Getter
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string _darkest_secret;

};

#endif
