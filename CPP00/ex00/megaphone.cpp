/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 02:27:58 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/16 13:51:56 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(int ac, char **av)
{
	std::string str;

	if (ac >= 2)
	{
		for (int i = 1; i < ac; i++)
		{
			str.assign(av[i]);
			for (int j = 0; str[j] != '\0'; j++)
				std::cout << (char)std::toupper(str[j]);
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}