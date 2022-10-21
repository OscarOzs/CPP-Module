/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:43:46 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/21 12:27:58 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void	shrubcpy()
{
	Bureaucrat Rick("Rick", 1);
	ShrubberyCreationForm shrub("file");
	std::cout << shrub << std::endl;
	shrub.beSigned(Rick);
	std::cout << shrub << std::endl;
	ShrubberyCreationForm shrubcpy(shrub);
	std::cout << shrubcpy << std::endl;
	
}

void	shrubNoSignNoExec()
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

void	shrubSignNoExec()
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

void	shrubExecButNotSigned()
{
	Bureaucrat Rick("Ricks", 1);
	std::cout << Rick << std::endl;
	ShrubberyCreationForm shrub("file");
	std::cout << shrub << std::endl;
	Rick.executeForm(shrub);
	shrub.execute(Rick);
}

void	shrubSignAndExec()
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

void	robocpy()
{
	Bureaucrat Rick("Rick", 1);
	RobotomyRequestForm robo("file");
	std::cout << robo << std::endl;
	robo.beSigned(Rick);
	std::cout << robo << std::endl;
	RobotomyRequestForm robocpy(robo);
	std::cout << robocpy << std::endl;
}

void	roboNoSignNoExec()
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

void	roboSignNoExec()
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

void	roboExecButNotSigned()
{
	Bureaucrat Rick("Ricks", 1);
	std::cout << Rick << std::endl;
	RobotomyRequestForm robo("file");
	std::cout << robo << std::endl;
	Rick.executeForm(robo);
	robo.execute(Rick);
}

void	roboSignAndExec()
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

void	presidentcpy()
{
	Bureaucrat Rick("Rick", 1);
	PresidentialPardonForm president("file");
	std::cout << president << std::endl;
	president.beSigned(Rick);
	std::cout << president << std::endl;
	PresidentialPardonForm presidentcpy(president);
	std::cout << presidentcpy << std::endl;
}

void	presidentNoSignNoExec()
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

void	presidentSignNoExec()
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

void	presidentExecButNotSigned()
{
	Bureaucrat Rick("Ricks", 1);
	std::cout << Rick << std::endl;
	PresidentialPardonForm president("file");
	std::cout << president << std::endl;
	Rick.executeForm(president);
	president.execute(Rick);
}

void	presidentSignAndExec()
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