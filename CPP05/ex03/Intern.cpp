/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:56:42 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/25 10:53:13 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	return;
}

Intern::Intern( const Intern & src )
{
	*this = src;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
	{
		return (*this);
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form*	Intern::makeForm(std::string form, std::string target)
{
	Form*	ret = NULL;
	t_object	obj[3] = 
	{
		{"shrubbery creation", new ShrubberyCreationForm(target)},
		{"robotomy request", new RobotomyRequestForm(target)},
		{"presidential pardon", new PresidentialPardonForm(target)}
	};
	for (int i = 0; i < 3; i++)
	{
		if (obj[i].name == form)
		{
			std::cout << "Intern creates " << form << std::endl;
			ret = obj[i].form;
		}
	}
	if (ret == NULL)
		std::cout << "Error : " << form << " is not a valid form" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if (ret != obj[i].form)
			delete obj[i].form;
	}
	return (ret);
}

/* ************************************************************************** */