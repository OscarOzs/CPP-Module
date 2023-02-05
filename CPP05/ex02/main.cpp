/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:43:46 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/05 18:30:26 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void	shrubcpy()
{
	try
	{
		Bureaucrat Rick("Rick", 1);
		ShrubberyCreationForm shrub("file");
		std::cout << shrub << std::endl;
		shrub.beSigned(Rick);
		std::cout << shrub << std::endl;
		ShrubberyCreationForm shrubcpy(shrub);
		std::cout << shrubcpy << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	shrubNoSignNoExec()
{
	try
	{
		Bureaucrat Rick("Rick", 146);
		std::cout << Rick << std::endl;
		ShrubberyCreationForm shrub("file");
		std::cout << shrub << std::endl;
		shrub.beSigned(Rick);
		std::cout << shrub << std::endl;
		Rick.executeForm(shrub);
		shrub.execute(Rick);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	shrubSignNoExec()
{
	try
	{
		Bureaucrat Rick("Rick", 140);
		std::cout << Rick << std::endl;
		ShrubberyCreationForm shrub("file");
		std::cout << shrub << std::endl;
		shrub.beSigned(Rick);
		std::cout << shrub << std::endl;
		Rick.executeForm(shrub);
		shrub.execute(Rick);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	shrubExecButNotSigned()
{
	try
	{
		Bureaucrat Rick("Ricks", 1);
		std::cout << Rick << std::endl;
		ShrubberyCreationForm shrub("file");
		std::cout << shrub << std::endl;
		Rick.executeForm(shrub);
		shrub.execute(Rick);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	shrubSignAndExec()
{
	try
	{
		Bureaucrat Rick("Ricks", 1);
		std::cout << Rick << std::endl;
		ShrubberyCreationForm shrub("file");
		std::cout << shrub << std::endl;
		shrub.beSigned(Rick);
		std::cout << shrub << std::endl;
		Rick.executeForm(shrub);
		shrub.execute(Rick);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	robocpy()
{
	try
	{
		Bureaucrat Rick("Rick", 1);
		std::cout << Rick << std::endl;
		RobotomyRequestForm robo("file");
		std::cout << robo << std::endl;
		robo.beSigned(Rick);
		std::cout << robo << std::endl;
		RobotomyRequestForm robocpy(robo);
		std::cout << robocpy << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	roboNoSignNoExec()
{
	try
	{
		Bureaucrat Rick("Rick", 80);
		std::cout << Rick << std::endl;
		RobotomyRequestForm robo("file");
		std::cout << robo << std::endl;
		robo.beSigned(Rick);
		std::cout << robo << std::endl;
		Rick.executeForm(robo);
		robo.execute(Rick);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	roboSignNoExec()
{
	try
	{
		Bureaucrat Rick("Rick", 70);
		std::cout << Rick << std::endl;
		RobotomyRequestForm robo("file");
		std::cout << robo << std::endl;
		robo.beSigned(Rick);
		std::cout << robo << std::endl;
		Rick.executeForm(robo);
		robo.execute(Rick);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	roboExecButNotSigned()
{
	try
	{
		Bureaucrat Rick("Ricks", 1);
		std::cout << Rick << std::endl;
		RobotomyRequestForm robo("file");
		std::cout << robo << std::endl;
		Rick.executeForm(robo);
		robo.execute(Rick);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	roboSignAndExec()
{
	try
	{
		Bureaucrat Rick("Ricks", 1);
		std::cout << Rick << std::endl;
		RobotomyRequestForm robo("file");
		std::cout << robo << std::endl;
		robo.beSigned(Rick);
		std::cout << robo << std::endl;
		Rick.executeForm(robo);
		robo.execute(Rick);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	presidentcpy()
{
	try
	{
		Bureaucrat Rick("Rick", 1);
		PresidentialPardonForm president("file");
		std::cout << president << std::endl;
		president.beSigned(Rick);
		std::cout << president << std::endl;
		PresidentialPardonForm presidentcpy(president);
		std::cout << presidentcpy << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	presidentNoSignNoExec()
{
	try
	{
		Bureaucrat Rick("Rick", 50);
		std::cout << Rick << std::endl;
		PresidentialPardonForm president("file");
		std::cout << president << std::endl;
		president.beSigned(Rick);
		std::cout << president << std::endl;
		Rick.executeForm(president);
		president.execute(Rick);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	presidentSignNoExec()
{
	try
	{
		Bureaucrat Rick("Rick", 10);
		std::cout << Rick << std::endl;
		PresidentialPardonForm president("file");
		std::cout << president << std::endl;
		president.beSigned(Rick);
		std::cout << president << std::endl;
		Rick.executeForm(president);
		president.execute(Rick);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	presidentExecButNotSigned()
{
	try
	{
		Bureaucrat Rick("Ricks", 1);
		std::cout << Rick << std::endl;
		PresidentialPardonForm president("file");
		std::cout << president << std::endl;
		Rick.executeForm(president);
		president.execute(Rick);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	presidentSignAndExec()
{
	try
	{
		Bureaucrat Rick("Ricks", 1);
		std::cout << Rick << std::endl;
		PresidentialPardonForm president("file");
		std::cout << president << std::endl;
		president.beSigned(Rick);
		std::cout << president << std::endl;
		Rick.executeForm(president);
		president.execute(Rick);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	std::cout << "Shrubbery test :" << std::endl;
	shrubcpy(); // 145Sign 137Ex
	std::cout << std::endl;
	shrubNoSignNoExec();
	std::cout << std::endl;
	shrubSignNoExec();
	std::cout << std::endl;
	shrubExecButNotSigned();
	std::cout << std::endl;
	shrubSignAndExec();
	std::cout << std::endl << std::endl;
	
	std::cout << "Robotomy test :" << std::endl;
	robocpy();  // 72Sign 45Ex
	std::cout << std::endl;
	roboNoSignNoExec();
	std::cout << std::endl;
	roboSignNoExec();
	std::cout << std::endl;
	roboExecButNotSigned();
	std::cout << std::endl;
	roboSignAndExec();
	std::cout << std::endl << std::endl;
	
	std::cout << "Presidential test :" << std::endl;
	presidentcpy(); // 25Sign 5Ex
	std::cout << std::endl;
	presidentNoSignNoExec();
	std::cout << std::endl;
	presidentSignNoExec();
	std::cout << std::endl;
	presidentExecButNotSigned();
	std::cout << std::endl;
	presidentSignAndExec();
	return (0);
}