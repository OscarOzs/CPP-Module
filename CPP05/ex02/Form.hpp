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
					return ("One of grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("One of grade is too low");
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
		
		void				execute(Bureaucrat const & executor) const throw(GradeTooLowException, FormIsNotSigned);
		virtual void		beSigned(const Bureaucrat& employee) throw(GradeTooLowException) = 0;
		const std::string	getName(void) const throw();
		bool				getStatus(void) const throw();
		int					getGradeSign(void) const throw();
		int					getGradeEx(void) const throw();

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