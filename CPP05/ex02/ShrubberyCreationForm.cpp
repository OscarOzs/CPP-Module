/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:12:44 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/24 12:21:01 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137)
{
	setTarget(target);
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) :
Form("Shrubbery", 145, 137)
{
	setTarget(getTarget());
	if (src.getStatus() == true)
		setStatus(true);
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
	ShrubberyCreationForm tmp(rhs);

	*this = tmp;
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
	if (employee.getGrade() > getGradeSign())
		throw (Form::GradeTooLowException());
	else
		setStatus(true);
	return;
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const throw()
{
	std::ofstream file;
	std::string fileName = getTarget() + "_shrubbery";

	if (this->checkExe(executor, getStatus(), getGradeEx()) == true)
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
		file << "                    /  / //    Y7' = true;.'     /  /" << std::endl;
		file << "                              :@):." << std::endl;
		file << "                             .:@:'." << std::endl;
		file << "                           .::(@:.  " << std::endl;
		file.close();
	}
	return;
}

/* ************************************************************************** */