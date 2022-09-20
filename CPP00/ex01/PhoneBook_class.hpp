/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:49:28 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/20 13:24:06 by oozsertt         ###   ########.fr       */
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
	const char	*exit_str;
	
	PhoneBook(const char *add_cmd, const char *search_cmd, const char *exit_cmd);
	~PhoneBook(void);

	void		search_function(int index);
	void		add_function(void);
	bool		input_is_correct(std::string input) const;
	static void	welcome_message(void);
	void		print_wrong_input(void);

	
	
private:

	Contact		my_contacts[8];
	int			contact_index;
	
	void		add_first_name(void);
	void		add_last_name(void);
	void		add_nickname(void);
	void		add_phone_number(void);
	void		add_darkest_secret(void);
	void		display_search_menu(int index);
	void		display_contact(int index);
};

#endif