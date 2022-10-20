/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:13:49 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/20 14:17:12 by oozsertt         ###   ########.fr       */
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
		PresidentialPardonForm(char* target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm();

		virtual void	beSigned(const Bureaucrat& employee) throw(GradeTooLowException);

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

	private:

		const char* _target;
		bool		_signed;
		const int	_gradeSign;
		const int	_gradeEx;

};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

# include "Bureaucrat.hpp"

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */