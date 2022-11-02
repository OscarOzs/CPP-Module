/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:09:01 by oozsertt          #+#    #+#             */
/*   Updated: 2022/11/02 21:24:01 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typeidentifier.hpp"

Base*	generate(void)
{
	int	nbr;

	srand(time(0));
	nbr = (rand() % 3);
	if (nbr == 0)
	{
		std::cout << "My type generated is A" << std::endl;
		return (new A);
	}
	else if (nbr == 1)
	{
		std::cout << "My type generated is B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "My type generated is C" << std::endl;
		return (new C);
	}
}