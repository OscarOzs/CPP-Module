/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:19:33 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/20 13:29:10 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

class Form;

class Bureaucrat
{

	public:

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("Grade is too low");
				}
		};

		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		void	upGrade() throw(GradeTooHighException);
		void	downGrade() throw(GradeTooLowException);
		void	signForm(Form& form) const throw(GradeTooLowException);
		void	executeForm(Form const & form) const throw(Form::FormIsNotSigned, GradeTooLowException);

		const std::string	getName() const throw();
		int					getGrade() const throw();

	private:
		
		const std::string	_name;
		int		_grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );


#endif