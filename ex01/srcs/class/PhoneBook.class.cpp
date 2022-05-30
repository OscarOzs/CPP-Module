/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:46:06 by oozsertt          #+#    #+#             */
/*   Updated: 2022/05/30 20:30:24 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

PhoneBook::PhoneBook(const char *add_cmd, const char *search_cmd, const char *exit_cmd) : 
add(add_cmd), search(search_cmd), exit(exit_cmd)
{
	std::cout << "Welcome to your PhoneBook" << std::endl;
	welcome_message();
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::welcome_message(void)
{
	std::cout << "ADD : Add new contact (8 maximum)" << std::endl;
	std::cout << "SEARCH : Search contact (1 contact in book minimum)" << std::endl;
	std::cout << "EXIT : Quit PhoneBook (all of your contact will be deleted)" << std::endl;
	return ;
}

void	PhoneBook::print_wrong_input(void)
{
	std::cout << "\nIncorrect command, please only use commands below :" << std::endl;
	welcome_message();
}

bool	PhoneBook::input_is_correct(std::string input) const
{
	if (input.empty() == false)
	{
		if (input.compare(PhoneBook::add) == 0)
			return (true);
		else if (input.compare(PhoneBook::search) == 0)
			return (true);
		else if (input.compare(PhoneBook::exit) == 0)
			return (true);
	}
	return (false);
}
