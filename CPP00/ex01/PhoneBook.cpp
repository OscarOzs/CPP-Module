/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:13:48 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/20 11:21:03 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

int main(void)
{
	PhoneBook	MyPhoneBook("ADD", "SEARCH", "EXIT");
	std::string	input;

	std::getline(std::cin,input);
	while (input.compare(MyPhoneBook.exit_str) != 0)
	{
		if (MyPhoneBook.input_is_correct(input) == false)
			MyPhoneBook.print_wrong_input();
		else if (input.compare(MyPhoneBook.add) == 0)
			MyPhoneBook.add_function();
		else if (input.compare(MyPhoneBook.search) == 0)
			MyPhoneBook.search_function(MyPhoneBook.contact_added);
		input.clear();
		std::cout << std::endl;
		if (std::cin.eof())
			break;
		MyPhoneBook.welcome_message();
		std::getline(std::cin,input);
	}
	return (0);
}