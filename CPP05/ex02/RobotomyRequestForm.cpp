/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:00:42 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/05 18:24:43 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	setTarget(target);
	return;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) :
Form(src.getName(), 72, 45)
{
	setTarget(getTarget());
	if (src.getStatus() == true)
		setStatus(true);
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if (this != &rhs)
	{
		RobotomyRequestForm tmp(rhs);
		*this = tmp;
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	std::string FormStatus;

	if (i.getStatus() == true)
		FormStatus = "signed";
	else
		FormStatus = "not signed";
	o << "Form Robo is " << FormStatus << ", need grade "
	<< i.getGradeSign() << " to get signed, and need " << i.getGradeEx()
	<< " to be executed";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		RobotomyRequestForm::beSigned(const Bureaucrat& employee) throw(GradeTooLowException)
{
	if (employee.getGrade() > getGradeSign())
		throw (Form::GradeTooLowException());
	else
		setStatus(true);
	return;
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const throw()
{
	srand(time(0));
	int randomNbr = rand();
	if (this->checkExe(executor, getStatus(), getGradeEx()) == true)
	{
		std::cout << "*drilling noises*" << std::endl;
		if ((randomNbr % 2) == 0)
			std::cout << getTarget() << " has been robotomized" << std::endl;
		else
			std::cout << "Robotomy failed.." << std::endl;
	}
	return;
}


/* ************************************************************************** */