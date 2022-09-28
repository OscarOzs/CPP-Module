/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:26:27 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/28 16:33:42 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	t_message msg[4] = 
	{
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};
	Harl	Harlin;
	void	(Harl::*ptr)(void);

	for (int i = 0; i < 4; i++)
	{
		if (msg[i].level == level)
		{
			ptr = msg[i].f;
			(Harlin.*ptr)();
			return;
		}
	}
	return;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! if you did, I wouldn't be asking for more!"
	<< std::endl;
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-triple-pickle-special-ketchup burger. I really do!"
	<< std::endl;
}

Harl::Harl()
{
	return;
}

Harl::~Harl()
{
	
}