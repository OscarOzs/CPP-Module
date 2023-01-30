/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:08:01 by oozsertt          #+#    #+#             */
/*   Updated: 2023/01/30 13:21:20 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	paramtrap()
{
	ScavTrap guardian("Random");

	guardian.guardGate();
	return;
}

void	noparamTrap()
{
	ScavTrap random;

	random.attack("Monster");
}

void	copyTrap()
{
	ScavTrap random("Oscar");
	ScavTrap Oscar(random);

	Oscar.beRepaired(10);
}

void	JohnExhausted(void)
{
	ScavTrap	John;

	ScavTrap	Sam("John");
	John = Sam;
	for (int i = 0; i < 51; i++)
	{
		John.attack("Enemy");
	}
	John.beRepaired(5);
}

void	RicoDies(void)
{
	ScavTrap	Rico("Rico");

	ScavTrap	random(Rico);
	for (int i = 0; i < 11; i++)
	{
		random.takeDamage(10);
	}
	random.attack("Monster");
	random.beRepaired(10);
}

void	OscarRepair(void)
{
	ScavTrap	random("Oscar");

	for (int i = 0; i < 51; i++)
	{
		random.beRepaired(100);
	}
	random.takeDamage(5);
}

int main(void)
{
	paramtrap();
	noparamTrap();
	copyTrap();
	JohnExhausted();
	RicoDies();
	OscarRepair();
	return(0);
}