/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:13:48 by oozsertt          #+#    #+#             */
/*   Updated: 2022/06/01 15:20:51 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

int main(void) // gerer le cas ou on utiliser ctrl+d dans une boucle.(sujet de correction)
{
	PhoneBook MyPhoneBook("ADD", "SEARCH", "EXIT");
	std::string	input;

	std::getline(std::cin,input);
	while (input.compare(MyPhoneBook.exit) != 0)
	{
		if (MyPhoneBook.input_is_correct(input) == false)
			MyPhoneBook.print_wrong_input();
		else if (input.compare(MyPhoneBook.add) == 0)
			MyPhoneBook.add_function();
		else if (input.compare(MyPhoneBook.search) == 0)
			MyPhoneBook.search_function();
		input.clear();
		std::cout << std::endl;
		MyPhoneBook.welcome_message();
		std::getline(std::cin,input);
	}
	return (0);
}