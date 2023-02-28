/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 06:05:02 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/28 01:17:05 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	iter(tab, 10, &print);
	std::cout << std::endl;

	char str[] = "oscar";

	iter(str, 5, &print);
	std::cout << std::endl;

	float decim[] = {4.2f, 42.0f};
	iter(decim, 2, &print);
	std::cout << std::endl;

	double ddecim[] = {2.1, 21.0, 2.111};
	iter(ddecim, 3, &print);
	std::cout << std::endl;

	std::string name = "Rick";
	iter(&name, 1, &print);
}