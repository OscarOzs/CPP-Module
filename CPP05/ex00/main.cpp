/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:43:46 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/17 14:41:49 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructor grade too low
void	gradeTooLow()
{
	Bureaucrat Rick("Rick", 2500);
}

// Constructor grade too high
void	gradeTooHigh()
{
	Bureaucrat Rick("Rick", 0);
}

// upgrade too high
void	upgradeFailed()
{
	Bureaucrat Rick("Rick", 5);

	for (int i = 0; i < 5; i++)
	{
		Rick.upGrade();
		std::cout << Rick << std::endl;
	}
}

// upgrade too low
void	downgradeFailed()
{
	Bureaucrat Rick("Rick", 140);

	for (int i = 0; i < 11; i++)
	{
		Rick.downGrade();
		std::cout << Rick << std::endl;
	}
}

// Copy constructor
void	cpyConstructorTest()
{
	Bureaucrat Rick("Rick", 150);
	Bureaucrat Ricko(Rick);

	std::cout << Ricko << std::endl;
	// Ricko n'a pas de nom car _name est const
}

// Assignation operator
void	assignTest()
{
	Bureaucrat Rick("Rick", 1);
	Bureaucrat Ricko("Ricko", 150);

	std::cout << Ricko << std::endl;
	Ricko = Rick;
	std::cout << Ricko << std::endl;
	// Ricko ne change pas de nom car _name est const
}

int main(void)
{
	gradeTooLow();
	// gradeTooHigh();
	// upgradeFailed();
	// downgradeFailed();
	// cpyConstructorTest();
	// assignTest();
}