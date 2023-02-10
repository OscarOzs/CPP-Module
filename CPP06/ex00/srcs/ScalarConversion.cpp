/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:28:09 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/10 06:24:36 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(char *input)
{
	this->_input.assign(input);
	if (isInputValid() == false)
		std::cout << "Input is invalid" << std::endl;
	// else
		//
	return;
}

ScalarConversion::ScalarConversion(ScalarConversion const & src)
{
	this->_input = src._input;
	this->_charValue = src._charValue;
	this->_intValue = src._intValue;
	this->_floatValue = src._floatValue;
	this->_doubleValue = src._doubleValue;
	return;
}

ScalarConversion::~ScalarConversion()
{
	return;
}

////////////////////////////////////// OPERATOR ////////////////////////////////


ScalarConversion & ScalarConversion::operator=(ScalarConversion const & rhs)
{
	if (this != &rhs)
	{
		this->_input = rhs._input;
		this->_charValue = rhs._charValue;
		this->_intValue = rhs._intValue;
		this->_floatValue = rhs._floatValue;
		this->_doubleValue = rhs._doubleValue;
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, ScalarConversion const & rhs)
{
	o << "char: " << rhs.getCharValue() << std::endl;
	o << "int: " << rhs.getIntValue() << std::endl;
	o << "float: " << rhs.getFloatValue() << std::endl;
	o << "double: " << rhs.getDoubleValue();
	return o;
}

////////////////////////////////////// ACCESSOR ////////////////////////////////

char	ScalarConversion::getCharValue() const
{
	return (this->_charValue);
}

int		ScalarConversion::getIntValue() const
{
	return (this->_intValue);
}

float	ScalarConversion::getFloatValue() const
{
	return (this->_floatValue);
}

double	ScalarConversion::getDoubleValue() const
{
	return (this->_doubleValue);
}

////////////////////////////////////// METHOD /////////////////////////////////

bool	ScalarConversion::isInputValid() const
{
	std::string str;
	str.assign(this->_input);
	if (str.length() == 0)
		return (false);
	else if ((str.compare("-inff") == 0) || (str.compare("+inff") == 0)
		|| (str.compare("nanf") == 0) || (str.compare("nan") == 0))
		return (true);
	else if (str.find_first_not_of("f.-+0123456789") != std::string::npos)
		return (false);
	else if ((str.find("-") != std::string::npos)
		&& (isSignInputValid(str, '-') == false)) // erreur ici car check pour le signe -  et le signe +
		return (false);
	else if ((str.find("f") != std::string::npos)
		&& (isFloatInputValid(str) == false))
	{
		ICI	
		return (false);
	} //  ERREUR ICI AVEC INPUT -5.6f
	else if ((str.find(".") != std::string::npos)
		&& (isPointInputValid(str) == false))
		return (false);
	else if ((str.find_first_not_of("f.") == std::string::npos)
		&& (isNumberInRange(str) == false))
		return (false);
	else
		return (true);
}

bool	ScalarConversion::isNumberInRange(std::string str)
{
	char *endptr;

	long number = std::strtol(str.c_str(), &endptr, 10);
	if (number > INT_MAX)
		return (false);
	else if (number < INT_MIN)
		return (false);
	else
		return (true);
}

bool	ScalarConversion::isPointInputValid(std::string str)
{
	size_t	str_len;
	size_t	pos;
	int	dotCount = 0;
	int	fCount = 0;

	str_len = str.length();
	if (str_len == 1)
		return (true);
	for (size_t i = 0; i < str_len; i++) // check if str contains multiple '.' and other char than '.' and digit.
	{
		if (str[i] == '.')
			dotCount++;
		else if (str[i] == 'f')
			fCount++;
		if (dotCount > 1 || fCount > 1)
			return (false);
		else if (str[i] != '.' && str[i] != 'f' && (isdigit(str[i]) == false))
			return (false);
	}
	pos = str.find(".");
	if (pos == (str_len - 1)) // '.' a la derniere position et input != '.'
		return (false);
	else if (isdigit(str[pos + 1]) == false)
		return (false);
	else
		return (true);
}

bool	ScalarConversion::isFloatInputValid(std::string str)
{
	size_t str_len;
	int	dotCount = 0;

	str_len = str.length();
	if (str_len < 2)
		return (false);
	else if (str[--str_len] != 'f')
		return (false);
	for (size_t i = 0; i < --str_len; i++)
	{
		if (str[i] == '.')
			dotCount++;
		else if ((isdigit(str[i]) == false) && (str[i] != '.'))
			return (false);
		else if (str[i] == '.' && dotCount > 0)
			return (false);
	}
	return (true);
}

bool	ScalarConversion::isSignInputValid(std::string str, char sign)
{
	size_t str_len;
	int	fCount = 0;
	int	dotCount = 0;

	if (str[0] == sign)
	{
		str_len = str.length();
		if (str_len <= 1)
			return (false);
		for (size_t i = 1; i < str_len; i++)
		{
			if (str[i] == 'f')
			{
				fCount++;
				if (fCount > 1)
					return (false);
			}
			else if (str[i] == '.')
			{
				dotCount++;
				if (dotCount > 1)
					return (false);
			}
			else if (isdigit(str[i]) == false)
			{
				return (false);
			}
		}
		return (true);
	}
	else
		return (false);
}

// void	ScalarConversion::identifyType()
// {
// 	return;
// }