/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:00:37 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/21 09:49:34 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
#include <cstdlib>

# include "Form.hpp"

class Bureaucrat;
class Form;

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm();

		virtual void	beSigned(const Bureaucrat& employee) throw(GradeTooLowException);
		virtual void	execute(Bureaucrat const & executor) const throw();
		virtual bool	getStatus(void) const throw();
		virtual int		getGradeSign(void) const throw();
		virtual int		getGradeEx(void) const throw();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:

		std::string	_target;
		bool		_signed;
		const int	_gradeSign;
		const int	_gradeEx;

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

# include "Bureaucrat.hpp"

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */