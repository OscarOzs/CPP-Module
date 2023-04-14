/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:02:22 by oozsertt          #+#    #+#             */
/*   Updated: 2023/04/14 13:26:16 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	(void)ac;
	try
	{
		BitcoinExchange a(av[1]);
	}
	catch(const std::invalid_argument& e)
	{
		std::cout << e.what() << '\n';
	}
	return (0);
}
