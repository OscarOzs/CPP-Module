/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:19:27 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/05 17:56:04 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Unknow Bureaucrat"), _grade(150)
{
	return;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) :
_name(name)
{
	if (grade > 150)
	{
		this->_grade = 150;
		throw (Bureaucrat::GradeTooLowException());
	}
	else if (grade < 1)
	{
		this->_grade = 1;
		throw(Bureaucrat::GradeTooHighException());
	}
	else
		this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src._name)
{
	this->_grade = src._grade;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string	Bureaucrat::getName() const throw()
{
	return (this->_name);
}

int		Bureaucrat::getGrade() const throw()
{
	return (this->_grade);
}

/*
** --------------------------------- MEMBER FUNCTION --------------------------
*/

void	Bureaucrat::upGrade() throw(GradeTooHighException)
{
	if ((this->_grade - 1) < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
	else
		this->_grade--;
	return;
}

void	Bureaucrat::downGrade() throw(GradeTooLowException)
{
	if ((this->_grade + 1) > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	else
		this->_grade++;
	return;
}

void	Bureaucrat::signForm(Form& form) const throw(GradeTooLowException)
{
	if (form.getStatus() == true || form.getGradeSign() > this->_grade)
		std::cout << "Bureaucrat " << this->_name << " signed " << form.getName() << std::endl;
	else
	{
		std::cout << "Bureaucrat " << this->_name << " couldn't sign form "
		<< form.getName() << " because ";
		throw (Bureaucrat::GradeTooLowException());
	}
	return;
}

void	Bureaucrat::executeForm(Form const & form) const throw(Form::FormIsNotSigned, GradeTooLowException)
{
	if (this->_grade > form.getGradeEx())
		throw (GradeTooLowException());
	else if (form.getStatus() == false)
		throw (Form::FormIsNotSigned());
	else
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	return;
}

/* ************************************************************************** */