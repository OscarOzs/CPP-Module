/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:31:57 by oozsertt          #+#    #+#             */
/*   Updated: 2023/01/20 18:18:55 by oozsertt         ###   ########.fr       */
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