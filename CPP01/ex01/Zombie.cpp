/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:48:25 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/22 08:48:16 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	delete_zombietab(Zombie* zombie_tab)
{
	delete [] zombie_tab;
	return;
}

void	Zombie::setName(std::string str)
{
	this->name = str;
	return;
}

void	Zombie::announce(void) const
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	return;
}