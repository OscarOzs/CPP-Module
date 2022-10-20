/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:12:44 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/20 14:57:08 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : _target("test"),
_signed(false), _gradeSign(145), _gradeEx(137)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(char* target) : _target(target),
_signed(false), _gradeSign(145), _gradeEx(137)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) :
Form(src), _target(src._target), _gradeSign(145), _gradeEx(137)
{
	this->_signed = src._signed;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
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

void		ShrubberyCreationForm::beSigned(const Bureaucrat& employee) throw(GradeTooLowException)
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