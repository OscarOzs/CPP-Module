/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:11:21 by oozsertt          #+#    #+#             */
/*   Updated: 2023/04/12 20:24:03 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

int main(int ac, char **av)
{
	// std::istringstream stream("7 8 * 9 -");
	// std::string str;
	// std::stack<int> myStack;

	// while (getline(stream, str, ' '))
	// {
	// 	if (isdigit(str[0]))
	// 		myStack.push(atoi(str.c_str()));
	// 	std::cout << myStack.top() << std::endl;
	// }

	if (ac == 2)
		rpn_calculate(av[1]);
	else
		std::cout << "Invalid number of argument" << std::endl;
}