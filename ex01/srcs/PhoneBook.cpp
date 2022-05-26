/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:13:48 by oozsertt          #+#    #+#             */
/*   Updated: 2022/05/26 19:34:59 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

int main(void) // utiliser getline plutot que std::cin, gerer le cas ou on utiliser ctrl+d dans une boucle.(sujet de correction)
{
	PhoneBook MyPhoneBook("ADD", "SEARCH", "EXIT");
	std::string	input;

	std::cin >> input;
	while (input.compare(MyPhoneBook.exit) != 0)
	{
		if (MyPhoneBook.input_is_correct(input) == false)
			MyPhoneBook.print_wrong_input();
		else if (input.compare(MyPhoneBook.add) == 0)
			std::cout << "NEW CONTACT ADDED" << std::endl;
		else if (input.compare(MyPhoneBook.search) == 0)
			std::cout << "LOOKING FOR A CONTACT" << std::endl;
		input.clear();
		std::cin >> input;
	}
	return (0);
}