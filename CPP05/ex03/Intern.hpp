/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:56:12 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/25 10:39:32 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		virtual ~Intern();

		Intern &		operator=( Intern const & rhs );

		Form*	makeForm(std::string form, std::string const);

	private:

		typedef struct	s_form_object
		{
			std::string name;
			Form		*form;
		}				t_object;
};



#endif /* ********************************************************** INTERN_H */