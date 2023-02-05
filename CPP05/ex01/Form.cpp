/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:12:50 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/03 19:28:14 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("Unknow"), _signed(false), _gradeSign(50), _gradeEx(10) 
{
	return;
}

Form::Form(const std::string name, int gradeSignMin, int gradeExMin)
throw(GradeTooHighException, GradeTooLowException) :
_name(name), _signed(false), _gradeSign(gradeSignMin), _gradeEx(gradeExMin)
{
	if (gradeSignMin > 150)
		throw (Form::GradeTooLowException());
	else if (gradeSignMin < 1)
		throw (Form::GradeTooHighException());
	else if (gradeExMin > 150)
		throw (Form::GradeTooLowException());
	else if (gradeExMin < 1)
		throw (Form::GradeTooHighException());
	return;
}

Form::Form( const Form & src ) : _name(src._name), _gradeSign(src._gradeSign),
_gradeEx(src._gradeEx)
{
	this->_signed = src._signed;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	std::string formStatus;

	if (i.getStatus() == true)
		formStatus = "signed";
	else
		formStatus = "not signed";
	o << "Form " << i.getName() << " is " << formStatus << ", need grade "
	<< i.getGradeSign() << " to get signed, and need " << i.getGradeEx()
	<< " to be executed";
	return o;
}

/*
** --------------------------------- MEMBER FUNCTIONS -------------------------
*/

void	Form::beSigned(const Bureaucrat& employee) throw(GradeTooLowException)
{
	if (employee.getGrade() > this->_gradeSign)
		throw (Form::GradeTooLowException());
	else
		this->_signed = true;
	return;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	Form::getName(void) const throw()
{
	return (this->_name);
}

bool	Form::getStatus(void) const throw()
{
	return (this->_signed);
}

int	Form::getGradeSign(void) const throw()
{
	return (this->_gradeSign);
}

int	Form::getGradeEx(void) const throw()
{
	return (this->_gradeEx);
}


/* ************************************************************************** */