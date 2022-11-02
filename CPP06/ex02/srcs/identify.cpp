/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:08:54 by oozsertt          #+#    #+#             */
/*   Updated: 2022/11/02 21:07:09 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "typeidentifier.hpp"

void	identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);

	std::cout << "Type of this pointer is : ";
	
	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base & p)
{
	std::cout << "Type of this pointer is : ";
	try
	{
		A & a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception &e)
	{
	}

	try
	{
		B & b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		C & c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
}