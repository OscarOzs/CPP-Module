/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:31:23 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/21 12:56:49 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie*	WhiteWalkers;
	
	WhiteWalkers = newZombie("King of the night");
	randomChump("Random Undead");
	WhiteWalkers->announce();
	delete_function(WhiteWalkers);
	return (0);
}