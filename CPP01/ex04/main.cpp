/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:00:30 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/28 08:56:46 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of argument" << std::endl;
		return (1);
	}
	else if (file_is_valid(av[1]) == false)
		return (2);
	else
	{
		SedClass Sed(av[1], av[2], av[3]);
		Sed.exe_sed();
	}
	return(0);
	
}