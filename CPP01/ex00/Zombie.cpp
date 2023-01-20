/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:58:05 by oozsertt          #+#    #+#             */
/*   Updated: 2023/01/20 17:55:27 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
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