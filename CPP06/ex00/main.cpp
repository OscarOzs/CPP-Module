/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:38:12 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/11 02:08:01 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include <iostream>
// # include <string>
#include "ScalarConversion.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
		ScalarConversion tmp(av[1]);
	else
		std::cout << "Invalid number of argument" << std::endl;
	// std::string *tab;
	// tab = new std::string[6];

	// tab[0] = "char : ";
	// std::cout << tab[0] << std::endl;
	// tab[0] = tab[0] + "42";
	// std::cout << tab[0] << std::endl;

}
