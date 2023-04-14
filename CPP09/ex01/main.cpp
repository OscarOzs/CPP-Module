/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:11:21 by oozsertt          #+#    #+#             */
/*   Updated: 2023/04/14 13:47:03 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
		rpn_calculate(av[1]);
	else
		std::cout << "Invalid number of argument" << std::endl;
}