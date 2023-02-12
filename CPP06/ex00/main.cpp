/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:38:12 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/12 15:30:28 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include <iostream>
// # include <string>
#include "ScalarConversion.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		ScalarConversion tmp(av[1]);
		std::cout << tmp << std::endl;
	}
	else
		std::cout << "Invalid number of argument" << std::endl;
	
	// int nbr = 42;
	// std::string str = "coucou";
	// str += nbr;
	// std::cout << str << std::endl;
}
