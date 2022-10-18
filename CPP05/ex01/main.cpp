/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:43:46 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/18 17:40:47 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	BureaucratA("Bob", 5);
	Bureaucrat	BureaucratB("John", 130);
	Bureaucrat	BureaucratC("Max", 7);
	Form		form1("Form-28B", 10, 10);

	std::cout << "---------TEST1-----------" << std::endl;

	std::cout << form1 << std::endl;
	std::cout << BureaucratA << std::endl;
	std::cout << BureaucratB << std::endl;
	std::cout << BureaucratC << std::endl;

	try
	{
		BureaucratA.signForm(form1);
		BureaucratC.signForm(form1);
		BureaucratB.signForm(form1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------TEST2-----------" << std::endl;

	Form		form2("Form-29B", 0, 150);
	Form		form3("Form-30B", 1, 151);

	return (0);
}