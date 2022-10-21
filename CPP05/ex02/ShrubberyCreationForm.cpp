/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:12:44 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/21 10:36:47 by oozsertt         ###   ########.fr       */
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

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target),
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
	o << "Form Schrub is " << FormStatus << ", need grade "
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

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const throw()
{
	std::ofstream file;
	std::string fileName = this->_target + "_shrubbery";

	if (this->checkExe(executor, this->_signed, this->_gradeEx) == true)
	{
		file.open(fileName.c_str(), std::ios::out);
		file << "                     / / /" << std::endl;
		file << "                   /        /  /     //    /" << std::endl;
		file << "                /                 /         /  /" << std::endl;
		file << "                                /" << std::endl;
		file << "                               /                //" << std::endl;
		file << "               /          /            /              /" << std::endl;
		file << "               /            '/,        /               /" << std::endl;
		file << "               /              'b      *" << std::endl;
		file << "                /              '$    //                //" << std::endl;
		file << "               /    /           $:   /:               /" << std::endl;
		file << "             //      /  //      */  @):        /   / /" << std::endl;
		file << "                          /     :@,@):   ,/**:'   /" << std::endl;
		file << "              /      /,         :@@*: //**'      /   /" << std::endl;
		file << "                       '/o/    /:(@'/@*'  /" << std::endl;
		file << "               /  /       'bq,//:,@@*'   ,*      /  /" << std::endl;
		file << "                          ,p$q8,:@)'  /p*'      /" << std::endl;
		file << "                   /     '  / '@@Pp@@*'    /  /" << std::endl;
		file << "                    /  / //    Y7'.'     /  /" << std::endl;
		file << "                              :@):." << std::endl;
		file << "                             .:@:'." << std::endl;
		file << "                           .::(@:.  " << std::endl;
		file.close();
	}
	return;
}

/*
** --------------------------------- ACCESSORS --------------------------------
*/

bool	ShrubberyCreationForm::getStatus(void) const throw()
{
	return (this->_signed);
}

int	ShrubberyCreationForm::getGradeSign(void) const throw()
{
	return (this->_gradeSign);
}

int	ShrubberyCreationForm::getGradeEx(void) const throw()
{
	return (this->_gradeEx);
}


/* ************************************************************************** */