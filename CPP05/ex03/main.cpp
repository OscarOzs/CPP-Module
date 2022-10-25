/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:43:46 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/25 11:03:51 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	shrubTest()
{
	Bureaucrat Rick("Rick", 1);
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("shrubbery creation", "file");
	if (rrf == NULL)
	{
		std::cout << "malloc has failed" << std::endl;
		return;
	}
	std::cout << *rrf << std::endl;
	rrf->beSigned(Rick);
	rrf->execute(Rick);
	std::cout << *rrf << std::endl;
	delete rrf;
}

void	roboTest()
{
	Bureaucrat Rick("Rick", 1);
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf == NULL)
	{
		std::cout << "malloc has failed" << std::endl;
		return;
	}
	std::cout << *rrf << std::endl;
	rrf->beSigned(Rick);
	rrf->execute(Rick);
	std::cout << *rrf << std::endl;
	delete rrf;
}

void	presidentTest()
{
	Bureaucrat Rick("Rick", 1);
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (rrf == NULL)
	{
		std::cout << "malloc has failed" << std::endl;
		return;
	}
	std::cout << *rrf << std::endl;
	rrf->beSigned(Rick);
	rrf->execute(Rick);
	std::cout << *rrf << std::endl;
	delete rrf;
}

void	invalidForm()
{
	Bureaucrat Rick("Rick", 1);
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("coucou", "Bender");
	if (rrf == NULL)
	{
		std::cout << "malloc has failed" << std::endl;
		return;
	}
	std::cout << *rrf << std::endl;
	rrf->beSigned(Rick);
	rrf->execute(Rick);
	std::cout << *rrf << std::endl;
	delete rrf;
}

int main()
{
	std::cout << "shrubbery form :" << std::endl;
	shrubTest();
	std::cout << std::endl << "robotomy form :" << std::endl;
	roboTest();
	std::cout << std::endl << "president form :" << std::endl;
	presidentTest();
	std::cout << std::endl << "invalid form :" << std::endl;
	invalidForm();
	return (0);
}