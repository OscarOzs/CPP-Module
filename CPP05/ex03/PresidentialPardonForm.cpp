/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:17:24 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/24 12:20:13 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
	setTarget(target);
	return;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) :
Form(src.getName(), 25, 5)
{
	setTarget(getTarget());
	if (src.getStatus() == true)
		setStatus(true);
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
	PresidentialPardonForm tmp(rhs);

	*this = tmp;
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
	if (employee.getGrade() > getGradeSign())
		throw (Form::GradeTooLowException());
	else
		setStatus(true);
	return;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const throw()
{
	if (this->checkExe(executor, getStatus(), getGradeEx()) == true)
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return;
}

/* ************************************************************************** */