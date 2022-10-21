/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:12:58 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/19 17:08:13 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{

	public:

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("grade input is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("grade is too low");
				}
		};

		class FormIsNotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("this form is not signed");
				}	
		};

		Form();
		Form(const std::string name, int gradeSignMin, int gradeExMin)
		throw(GradeTooHighException, GradeTooLowException);
		Form( Form const & src );
		~Form();
		
		bool				checkExe(Bureaucrat const & executor, bool is_signed, int gradeEx) const throw(GradeTooLowException, FormIsNotSigned);
		virtual void		execute(Bureaucrat const & executor) const throw() = 0;
		virtual void		beSigned(const Bureaucrat& employee) throw(GradeTooLowException);
		const std::string	getName(void) const throw();
		virtual bool		getStatus(void) const throw();
		virtual int			getGradeSign(void) const throw();
		virtual int			getGradeEx(void) const throw();

		virtual Form &		operator=( Form const & rhs );

	private:
	
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeEx;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

# include "Bureaucrat.hpp"

#endif /* *********************************************************** Form_H */