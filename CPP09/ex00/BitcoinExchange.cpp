/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:02:43 by oozsertt          #+#    #+#             */
/*   Updated: 2023/03/28 18:37:20 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange(char *input) : _database("data.csv")
{
	check_file(input);
	store_database();
	return ;
}


BitcoinExchange::BitcoinExchange()
{
	return ;
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BitcoinExchange::~BitcoinExchange()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BitcoinExchange &				BitcoinExchange::operator=( BitcoinExchange const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	BitcoinExchange::check_file(char *input) const throw(std::invalid_argument)
{
	std::ifstream file(input);
	if (file.is_open() == false)
		throw std::invalid_argument("Error: could not open file.");
	std::string file_content;
	file >> file_content;
	if (file_content.empty())
		throw std::invalid_argument("Error: file is empty.");
	file.close();
	return ;
}

void	BitcoinExchange::store_database() throw ()
{
	std::ifstream file(this->_database.c_str());
	std::string	line;
	std::string	date;
	std::string	value;
	std::size_t	pos;

	std::getline(file, line);
	while (std::getline(file, line))
	{
		pos = line.find(',');
		date = line.substr(0, pos);
		value = line.substr(pos + 1);
		this->_data[date] = atof(value.c_str());
	}
	std::map<std::string, float>::iterator it;
	for (it = this->_data.begin(); it != this->_data.end(); it++)
		std::cout << it->first << "," << it->second << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */