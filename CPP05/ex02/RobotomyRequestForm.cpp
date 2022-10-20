/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:00:42 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/20 14:09:40 by oozsertt         ###   ########.fr       */
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

RobotomyRequestForm::RobotomyRequestForm(char* target) : _target(target),
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
	o << "Form " << i.getName() << " is " << FormStatus << ", need grade "
	<< i.getGradeSign() << " to get signed, and need " << i.getGradeEx()
	<< " to be executed";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::beSigned(const Bureaucrat& employee) throw(GradeTooLowException)
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

/* ************************************************************************** */