/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:43:46 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/24 12:38:19 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructor grade too low
void	gradeTooLow()
{
	try
	{
		Bureaucrat Rick("Rick", 2500);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// Constructor grade too high
void	gradeTooHigh()
{
	try
	{
		Bureaucrat Rick("Rick", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// upgrade too high
void	upgradeFailed()
{
	try
	{
		Bureaucrat Rick("Rick", 5);
		for (int i = 0; i < 5; i++)
		{
			Rick.upGrade();
			std::cout << Rick << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// upgrade too low
void	downgradeFailed()
{
	try
	{
		Bureaucrat Rick("Rick", 140);
		for (int i = 0; i < 11; i++)
		{
			Rick.downGrade();
			std::cout << Rick << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// Copy constructor
void	cpyConstructorTest()
{
	try
	{
		Bureaucrat Rick("Rick", 150);
		Bureaucrat Ricko(Rick);
		std::cout << Ricko << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// Assignation operator
void	assignTest()
{
	try
	{
		Bureaucrat Rick("Rick", 1);
		Bureaucrat Ricko("Ricko", 150);
		std::cout << Ricko << std::endl;
		Ricko = Rick;
		std::cout << Ricko << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// Ricko ne change pas de nom car _name est const
}

int main(void)
{
	gradeTooLow();
	gradeTooHigh();
	upgradeFailed();
	downgradeFailed();
	cpyConstructorTest();
	assignTest();
}