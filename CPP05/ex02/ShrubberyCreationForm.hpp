/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:12:51 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/21 09:17:37 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

class Bureaucrat;
class Form;

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		virtual ~ShrubberyCreationForm();

		virtual void	beSigned(const Bureaucrat& employee) throw(GradeTooLowException);
		virtual void	execute(Bureaucrat const & executor) const throw();
		virtual bool	getStatus(void) const throw();
		virtual int		getGradeSign(void) const throw();
		virtual int		getGradeEx(void) const throw();

		virtual ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

	private:

		std::string	_target;
		bool		_signed;
		const int	_gradeSign;
		const int	_gradeEx;

};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

# include "Bureaucrat.hpp"

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */