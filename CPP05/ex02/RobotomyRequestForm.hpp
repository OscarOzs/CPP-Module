/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:00:37 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/20 14:00:38 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

class Bureaucrat;
class Form;

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(char* target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm();

		virtual void		beSigned(const Bureaucrat& employee) throw(GradeTooLowException);

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

	private:

		const char*	_target;
		bool		_signed;
		const int	_gradeSign;
		const int	_gradeEx;

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

# include "Bureaucrat.hpp"

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */