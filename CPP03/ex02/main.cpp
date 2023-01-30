/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:52:41 by oozsertt          #+#    #+#             */
/*   Updated: 2023/01/30 13:31:18 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	paramtrap()
{
	FragTrap supporter("Random");

	supporter.highFivesGuys();
	return;
}

void	noparamTrap()
{
	FragTrap random;

	random.attack("Monster");
}

void	copyTrap()
{
	FragTrap random("Oscar");
	FragTrap Oscar(random);

	Oscar.beRepaired(10);
}

void	JohnExhausted(void)
{
	FragTrap	John;

	FragTrap	Sam("John");
	John = Sam;
	for (int i = 0; i < 101; i++)
	{
		John.attack("Enemy");
	}
	John.beRepaired(5);
}

void	RicoDies(void)
{
	FragTrap	Rico("Rico");

	FragTrap	random(Rico);
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