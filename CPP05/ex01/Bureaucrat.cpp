/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:19:27 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/19 11:44:20 by oozsertt         ###   ########.fr       */
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
	try
	{
		if (grade > 150)
			throw (Bureaucrat::GradeTooLowException());
		else if (grade < 1)
			throw(Bureaucrat::GradeTooHighException());
		else
			this->_grade = grade;
	}
	catch (GradeTooHighException & e)
	{
		this->_grade = 1;
		std::cout << e.what() << std::endl;
	}
	catch (GradeTooLowException & e)
	{
		this->_grade = 150;
		std::cout << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
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
	try
	{
		if ((this->_grade - 1) < 1)
		{
			throw (Bureaucrat::GradeTooHighException());
		}
		else
			this->_grade--;
	}
	catch (GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return;
}

void	Bureaucrat::downGrade() throw(GradeTooLowException)
{
	try
	{
		if ((this->_grade + 1) > 150)
		{
			throw (Bureaucrat::GradeTooLowException());
		}
		else
			this->_grade++;
	}
	catch (GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
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

/* ************************************************************************** */