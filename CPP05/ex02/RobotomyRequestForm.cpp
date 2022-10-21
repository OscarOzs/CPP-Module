/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:00:42 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/21 10:36:38 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : _target("test"),
_signed(false), _gradeSign(72), _gradeEx(45)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target),
_signed(false), _gradeSign(72), _gradeEx(45)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) :
Form(src), _target(src._target), _gradeSign(72), _gradeEx(45)
{
	this->_signed = src._signed;
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
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
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
	try
	{
		if (employee.getGrade() > this->_gradeSign)
			throw (Form::GradeTooLowException());
		else
			this->_signed = true;
		
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return;
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const throw()
{
	srand(time(0));
	int randomNbr = rand();
	if (this->checkExe(executor, this->_signed, this->_gradeEx) == true)
	{
		std::cout << "*drilling noises*" << std::endl;
		if ((randomNbr % 2) == 0)
			std::cout << this->_target << " has been robotomized" << std::endl;
		else
			std::cout << "Robotomy failed.." << std::endl;
	}
	return;
}

/*
** --------------------------------- ACCESSORS --------------------------------
*/

bool	RobotomyRequestForm::getStatus(void) const throw()
{
	return (this->_signed);
}

int	RobotomyRequestForm::getGradeSign(void) const throw()
{
	return (this->_gradeSign);
}

int	RobotomyRequestForm::getGradeEx(void) const throw()
{
	return (this->_gradeEx);
}


/* ************************************************************************** */