/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:38:12 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/14 23:35:09 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
		ScalarConversion tmp(av[1]);
	else
		std::cout << "Invalid number of argument" << std::endl;
}
