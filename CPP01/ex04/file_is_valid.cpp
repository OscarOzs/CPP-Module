/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_is_valid.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:43:39 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/28 09:04:32 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

bool	file_is_valid(char *arg)
{
	std::ifstream file(arg);
	if (file.is_open() == false)
	{
		std::cout << "file doesnt exist" << std::endl;
		return (false);
	}
	std::string file_content;
	file >> file_content;
	if (file_content.empty())
	{
		std::cout << "file is empty" << std::endl;
		file.close();
		return (false);
	}
	file.close();
	return (true);
}