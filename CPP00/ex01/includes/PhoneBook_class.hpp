/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:49:28 by oozsertt          #+#    #+#             */
/*   Updated: 2022/06/01 15:03:36 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook
{
public:

	int			contact_added;
	const char	*add;
	const char	*search;
	const char	*exit;
	PhoneBook(const char *add_cmd, const char *search_cmd, const char *exit_cmd);
	~PhoneBook(void);

	bool		input_is_correct(std::string input) const;
	static void	welcome_message(void);
	void		print_wrong_input(void);
	void		add_function(void);

private:

	Contact my_contacts[8];
};

#endif