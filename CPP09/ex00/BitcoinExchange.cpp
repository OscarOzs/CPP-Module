/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:02:43 by oozsertt          #+#    #+#             */
/*   Updated: 2023/04/05 20:07:46 by oozsertt         ###   ########.fr       */
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
	main_algo(input);
	return ;
}


BitcoinExchange::BitcoinExchange()
{
	return ;
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & src ) : _database(src._database)
{
	this->_data = src._data;
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
	if (this != &rhs)
	{
		this->_data = rhs.getData();
	}
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
	file.close();
	return ;
}

bool	BitcoinExchange::input_valid(std::string &input) const throw()
{
	size_t	input_len;
	size_t	i;
	size_t	tmp;

	input_len = input.size();
	i = 0;
	while (isdigit(input[i]))
		i++;
	if (i == 0)
		return (false);
	else if (input[i] != '-')
		return (false);
	else
		i++;
	tmp = i;
	while (isdigit(input[i]))
		i++;
	if (i == tmp)
		return (false);
	else if (input[i] != '-')
		return (false);
	else
		i++;
	tmp = i;
	while (isdigit(input[i]))
		i++;
	if (i == tmp)
		return (false);
	else if (input[i] != ' ')
		return (false);
	i++;
	if (input[i] != '|')
		return (false);
	i++;
	if (input[i] != ' ')
		return (false);
	i++;
	tmp = i;
	while (isdigit(input[i]) || input[i] == '.' || input[i] == '-')
		i++;
	if (i == tmp)
		return (false);
	return (true);
}

bool	BitcoinExchange::date_valid(std::string &line) const throw ()
{
	std::stringstream stream(line);
	std::string			year;
	std::string			month;
	std::string			day;

	getline(stream, year, '-');
	if (atoi(year.c_str()) < 2009)
		return (false);
	getline(stream, month, '-');
	if (atoi(month.c_str()) > 12 || atoi(month.c_str()) < 1)
		return (false);
	getline(stream, day, ' ');
	if (atoi(day.c_str()) > 31 || atoi(day.c_str()) < 1)
		return (false);
	return (true);
}

int		BitcoinExchange::check_value(std::string &line) const throw()
{
	float		value;
	std::string	value_str;
	std::size_t	pos;
	
	pos = line.find('|');
	value_str = line.substr(pos + 2);
	value = atof(value_str.c_str());
	if (value >= 1000)
		return (1);
	else if (value < 0)
		return (2);
	return (0);
}

bool	BitcoinExchange::date_in_range(std::string &line) const throw()
{
	std::stringstream			stream(line);
	std::string					date;

	getline(stream, date, ' ');
	if (date < this->_data.begin()->first)
		return (false);
	else
		return (true);
}

void	BitcoinExchange::calculate_and_print(std::string line) throw()
{
	std::stringstream	stream(line);
	std::string			date;
	std::string			value_str;
	float				res;

	getline(stream, date, ' ');
	getline(stream, value_str, ' ');
	getline(stream, value_str, ' ');
	if (this->_data.count(date) > 0)
	{
		res = this->_data[date] * atof(value_str.c_str());
		line.replace(11, 1, "=>");
		std::cout << line << " = " << res << std::endl;
	}
	else
	{
		std::map<std::string, float>::iterator it;
		it = this->_data.insert(std::make_pair(date, 0)).first;
		std::map<std::string, float>::iterator it_tmp;
		it_tmp = it;
		it--;
		res = this->_data[it->first] * atof(value_str.c_str());
		line.replace(11, 1, "=>");
		this->_data.erase(it_tmp);
		std::cout << line << " = " << res << std::endl;
	}
	
}

void	BitcoinExchange::main_algo(char *input) throw()
{
	std::ifstream	file(input);
	std::string		line;
	std::string		res;
	
	while (std::getline(file, line))
	{
		if (input_valid(line) == false || date_valid(line) == false)
			std::cout << "Error: bad input => " << line << std::endl;
		else if (check_value(line) == 1)
			std::cout << "Error: too large a number." << std::endl;
		else if (check_value(line) == 2)
			std::cout << "Error: not a positive number." << std::endl;
		else if (date_in_range(line) == false)
			std::cout << "Error: date out of range." << std::endl;
		else
			calculate_and_print(line);
	}
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::map<std::string, float>	BitcoinExchange::getData() const throw()
{
	return (this->_data);
}

/* ************************************************************************** */