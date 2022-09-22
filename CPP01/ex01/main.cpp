/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:31:57 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/22 08:50:58 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* zombieArmy;
	int		nbr = 5;

	zombieArmy = zombieHorde(nbr, "Coucou");
	delete_zombietab(zombieArmy);
	return (0);
}