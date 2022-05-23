/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:27:03 by lmasson           #+#    #+#             */
/*   Updated: 2022/05/24 00:00:55 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie("Zombie en chef");
	zombie.announce();
	randomChump("Zombie sous fifre");
	Zombie *zombie1 = newZombie("Zombie magicien");
	zombie1->announce();
	delete zombie1;

	return (0);
}
