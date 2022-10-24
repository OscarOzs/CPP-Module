/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:12:50 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/19 16:23:52 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(const std::string name, const int gradeSignMin, const int gradeExMin)
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
** --------------------------------- MEMBER FUNCTIONS -------------------------
*/

void		Form::beSigned(const Bureaucrat& employee) throw(GradeTooLowException)
{
	if (employee.getGrade() > this->_gradeSign)
		throw (Form::GradeTooLowException());
	else
		this->_signed = true;
	return;
}

bool	Form::checkExe(Bureaucrat const & executor, bool is_signed, int gradeEx) const throw(GradeTooLowException, FormIsNotSigned)
{
	if (is_signed == false)
		throw (Form::FormIsNotSigned());
	else if (executor.getGrade() > gradeEx)
		throw (Form::GradeTooLowException());
	else
		return (true);
	return (false);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	Form::setTarget(const std::string target) throw()
{
	this->_target = target;
	return;
}

void	Form::setStatus(bool status) throw()
{
	this->_signed = status;
	return;
}

std::string	Form::getTarget() const throw()
{
	return (this->_target);
}

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