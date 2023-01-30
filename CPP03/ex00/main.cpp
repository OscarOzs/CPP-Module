/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:08:01 by oozsertt          #+#    #+#             */
/*   Updated: 2023/01/30 12:02:16 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	JohnExhausted(void)
{
	ClapTrap	John;

	ClapTrap	Sam("John");
	John = Sam;
	for (int i = 0; i < 11; i++)
	{
		John.attack("Enemy");
	}
	John.beRepaired(5);
}

void	RicoDies(void)
{
	ClapTrap	Rico("Rico");

	ClapTrap	random(Rico);
	for (int i = 0; i < 11; i++)
	{
		random.takeDamage(1);
	}
	random.attack("Monster");
	random.beRepaired(10);
}

void	OscarRepair(void)
{
	ClapTrap	random("Oscar");

	for (int i = 0; i < 5; i++)
	{
		random.beRepaired(15);
	}
	random.takeDamage(5);
}

int main(void)
{
	JohnExhausted();
	RicoDies();
	OscarRepair();
	return(0);
}