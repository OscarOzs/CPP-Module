/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:06:57 by oozsertt          #+#    #+#             */
/*   Updated: 2023/01/20 17:55:26 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie*	newZombie;
	
	newZombie = new Zombie(name);
	return (newZombie);
}

void	delete_function(Zombie* zombie_to_delete)
{
	delete zombie_to_delete;
	return;
}