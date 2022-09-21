/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:58:05 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/21 12:53:42 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

void	delete_function(Zombie* zombie_to_delete)
{
	delete zombie_to_delete;
	return;
}

Zombie::Zombie(std::string given_name): name(given_name)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": Came back to life" << std::endl;
	return;
}