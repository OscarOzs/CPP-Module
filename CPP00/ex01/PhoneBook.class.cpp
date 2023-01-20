/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:46:06 by oozsertt          #+#    #+#             */
/*   Updated: 2023/01/20 15:21:11 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"



PhoneBook::PhoneBook(const char *add_cmd, const char *search_cmd, const char *exit_cmd) : 
add(add_cmd), search(search_cmd), exit_str(exit_cmd)
{
	this->contact_index = 0;
	this->contact_added = 0;
	std::cout << "Welcome to your PhoneBook" << std::endl;
	welcome_message();
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Goodbye" << std::endl;
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
		else if (input.compare(PhoneBook::exit_str) == 0)
			return (true);
	}
	return (false);
}

static bool	is_str_digit(std::string str)
{
	for (unsigned int i = 0; i < (str.length()); i++)
	{
		if (isdigit(str[i]) == false)
			return (false);
	}
	return (true);
}

void	PhoneBook::add_first_name(void)
{
	std::string input;
	while (1)
	{
		std::cout << "First name :";
		std::getline(std::cin, input);
		if (input.empty() == true)
			std::cout << "First name cannot be empty" << std::endl;
		else if (is_str_digit(input) == true)
			std::cout << "First name cannot contain digit character" << std::endl;
		else
		{
			this->my_contacts[this->contact_index].set_firstname(input);
			input.clear();
			return;
		}
		input.clear();
		if (std::cin.eof())
			exit (1);
	}
}

void	PhoneBook::add_last_name(void)
{
	std::string input;

	while (1)
	{
		std::cout << "Last name :";
		std::getline(std::cin, input);
		if (input.empty() == true)
			std::cout << "Last name cannot be empty" << std::endl;
		else if (is_str_digit(input) == true)
			std::cout << "Last name cannot contain digit character" << std::endl;
		else
		{
			this->my_contacts[this->contact_index].set_lastname(input);
			input.clear();
			return;
		}
		input.clear();
		if (std::cin.eof())
			exit (1);
	}
}

void	PhoneBook::add_nickname(void)
{
	std::string input;

	while (1)
	{
		std::cout << "Nickname :";
		std::getline(std::cin, input);
		if (input.empty() == true)
			std::cout << "Nickname cannot be empty" << std::endl;
		else if (is_str_digit(input) == true)
			std::cout << "Nickname cannot contain digit character" << std::endl;
		else
		{
			this->my_contacts[this->contact_index].set_nickname(input);
			input.clear();
			return;
		}
		input.clear();
		if (std::cin.eof())
			exit (1);
	}
}

void	PhoneBook::add_phone_number(void)
{
	std::string input;

	while (1)
	{
		std::cout << "Phone number :";
		std::getline(std::cin, input);
		if (input.empty() == true)
			std::cout << "Phone number cannot be empty" << std::endl;
		else if (is_str_digit(input) == false)
			std::cout << "Phone number can only contain digit character" << std::endl;
		else
		{
			this->my_contacts[this->contact_index].set_phonenumber(input);
			input.clear();
			return;
		}
		input.clear();
		if (std::cin.eof())
			exit (1);
	}
}

void	PhoneBook::add_darkest_secret(void)
{
	std::string input;

	while (1)
	{
		std::cout << "Darkest secret :";
		std::getline(std::cin, input);
		if (input.empty() == true)
			std::cout << "Darkest secret cannot be empty" << std::endl;
		else
		{
			this->my_contacts[this->contact_index].set_darkestsecret(input);
			input.clear();
			return;
		}
		input.clear();
		if (std::cin.eof())
			exit (1);
	}
}

void	PhoneBook::add_function(void)
{
	add_first_name();
	add_last_name();
	add_nickname();
	add_phone_number();
	add_darkest_secret();
	std::cout << std::endl << "Contact successfully added" << std::endl;
	this->contact_index++;
	this->contact_added++;
	if (this->contact_index == 8)
		this->contact_index = 0;
}

void	PhoneBook::display_search_menu(int index)
{
	std::string str;
	std::string input;

	std::cout << std::setw(11);
	std::cout << "index|";
	std::cout << std::setw(11);
	std::cout << "first name|";
	std::cout << std::setw(11);
	std::cout << "last name|";
	std::cout << std::setw(11);
	std::cout << "nickname|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (i < index)
		{
			std::cout << std::setw(10);
			std::cout << i << "|";
	
			std::cout << std::setw(10);
			str.assign(my_contacts[i].get_first_name());
			if (str.length() > 10)
				str.replace(9, str.length(), ".");
			std::cout << str << "|";
			str.clear();
		
			std::cout << std::setw(10);
			str.assign(my_contacts[i].get_last_name());
			if (str.length() > 10)
				str.replace(9, str.length(), ".");
			std::cout << str << "|";
			str.clear();
		
			std::cout << std::setw(10);
			str.assign(my_contacts[i].get_nickname());
			if (str.length() > 10)
				str.replace(9, str.length(), ".");
			std::cout << str << "|";
			std::cout << std::endl;
		}
		else
		{
			std::cout << std::setw(11);
			std::cout << "|";

			std::cout << std::setw(11);
			std::cout << "|";
			
			std::cout << std::setw(11);
			std::cout << "|";

			std::cout << std::setw(11);
			std::cout << "|";
			std::cout << std::endl;
		}
	}
}

static int	s_to_i(std::string str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

void	PhoneBook::display_contact(int index)
{
	std::cout << my_contacts[index].get_first_name() << std::endl;
	std::cout << my_contacts[index].get_last_name() << std::endl;
	std::cout << my_contacts[index].get_nickname() << std::endl;
	std::cout << my_contacts[index].get_phone_number() << std::endl;
	std::cout << my_contacts[index].get_darkest_secret() << std::endl;
}

void	PhoneBook::search_function(int index)
{
	std::string input;
	int			int_input;

	if (this->contact_added < 1)
	{
		std::cout << "Please add atleast 1 contact before searching one" << std::endl;
		return;
	}
	display_search_menu(index);
	std::cout << "Choose a contact" << std::endl;
	std::getline(std::cin, input);
	
	int_input = s_to_i(input);
	if (input.length() > 1 || isdigit(input[0]) == false || int_input > 7)
	{
		std::cout << "Enter an index between 0 and 7" << std::endl;
		return;
	}
	else if (my_contacts[int_input].get_first_name().empty() == true)
	{
		std::cout << "Sorry, this contact does not exist" << std::endl;
		return;
	}
	else
		display_contact(int_input);
}