/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:13:49 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/21 09:18:17 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

class Bureaucrat;
class Form;

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm();

		virtual void	beSigned(const Bureaucrat& employee) throw(GradeTooLowException);
		virtual void	execute(Bureaucrat const & executor) const throw();
		virtual bool	getStatus(void) const throw();
		virtual int		getGradeSign(void) const throw();
		virtual int		getGradeEx(void) const throw();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

	private:

		std::string _target;
		bool		_signed;
		const int	_gradeSign;
		const int	_gradeEx;

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

# include "Bureaucrat.hpp"

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */