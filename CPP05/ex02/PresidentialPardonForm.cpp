/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:17:24 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/21 10:36:33 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : _target("test"),
_signed(false), _gradeSign(25), _gradeEx(5)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _target(target),
_signed(false), _gradeSign(25), _gradeEx(5)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) :
Form(src), _target(src._target), _gradeSign(145), _gradeEx(137)
{
	this->_signed = src._signed;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs._signed;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	std::string FormStatus;

	if (i.getStatus() == true)
		FormStatus = "signed";
	else
		FormStatus = "not signed";
	o << "Form President is " << FormStatus << ", need grade "
	<< i.getGradeSign() << " to get signed, and need " << i.getGradeEx()
	<< " to be executed";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		PresidentialPardonForm::beSigned(const Bureaucrat& employee) throw(GradeTooLowException)
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

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const throw()
{
	if (this->checkExe(executor, this->_signed, this->_gradeEx) == true)
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return;
}

/*
** --------------------------------- ACCESSORS --------------------------------
*/

bool	PresidentialPardonForm::getStatus(void) const throw()
{
	return (this->_signed);
}

int	PresidentialPardonForm::getGradeSign(void) const throw()
{
	return (this->_gradeSign);
}

int	PresidentialPardonForm::getGradeEx(void) const throw()
{
	return (this->_gradeEx);
}

/* ************************************************************************** */