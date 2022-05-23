/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 22:09:17 by lmasson           #+#    #+#             */
/*   Updated: 2022/05/23 23:56:05 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie
{
	private:

		std::string	_name;

	public:

		Zombie(std::string name);
		~Zombie();

		void	announce(void);
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
