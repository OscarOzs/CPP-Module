/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:28:09 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/11 05:18:43 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(char *input)
: _isLiteralNickname(false), _isChar(false), _isInt(false), _isFloat(false),
_isDouble(false)
{
	this->_output_tab = new std::string[4];
	this->_input.assign(input);
	if (parseAndCheckInput() == false)
	{
		std::cout << "Input is invalid" << std::endl;
		return ;
	}
	else
	{
		this->_output_tab[0] = "char: ";
		this->_output_tab[1] = "int: ";
		this->_output_tab[2] = "float: ";
		this->_output_tab[3] = "double: ";
	}
	return;
}

ScalarConversion::ScalarConversion(ScalarConversion const & src)
{
	this->_input = src._input;
	this->_charValue = src._charValue;
	this->_intValue = src._intValue;
	this->_floatValue = src._floatValue;
	this->_doubleValue = src._doubleValue;

	this->_isLiteralNickname = src._isLiteralNickname;
	this->_isChar = src._isChar;
	this->_isFloat = src._isFloat;
	this->_isDouble = src._isDouble;
	return;
}

ScalarConversion::~ScalarConversion()
{
	delete [] this->_output_tab;
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

		this->_isLiteralNickname = rhs._isLiteralNickname;
		this->_isChar = rhs._isChar;
		this->_isFloat = rhs._isFloat;
		this->_isDouble = rhs._isDouble;
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

bool	ScalarConversion::parseAndCheckInput()
{
	std::string str;
	str.assign(this->_input);

	if (str.compare("-inff") == 0 || str.compare("+inff") == 0
		|| str.compare("nanf") == 0 || str.compare("-inf") == 0
		|| str.compare("+inf") == 0 || str.compare("nan") == 0)
	{
		this->_isLiteralNickname = true;
		return (true);
	}
	else if (str.length() == 1 && isdigit(str[0]) == 0) // mandatory char case
	{
		this->_isChar = true;
		return (true);
	}
	else if (str[str.length() - 1] == 'f') // mandatory float case
	{
		if (isNumberAnFloat(str) == true)
		{
			this->_isFloat = true;
			return (true);
		}
	}
	else if (str.find(".") != std::string::npos) // mandatory double case
	{
		if (isNumberAnDouble(str) == true)
		{
			this->_isDouble = true;
			return (true);
		}
	}
	else if (isNumberAnInt(str) == true) // mandatory int case
	{
		this->_isInt = true;
		return (true);
	}
	return (false);
}

bool	ScalarConversion::isNumberAnDouble(std::string str)
{
	size_t i = 0;
	size_t min_len;
	size_t str_len = str.length();
	int dotCount = 0;

	if (str[i] == '+' || str[i] == '-')
	{
		i++;
		min_len = 3;
	}
	else
		min_len = 2;
	if (min_len > str_len)
		return (false);
	if (str.find(".") == std::string::npos)
		return (false);
	for (size_t j = 0; j < str_len; j++)
	{
		if (str[j] == '.')
			dotCount++;
	}
	if (dotCount > 1)
		return (false);
	if (str[i] == '.')
	{
		if (isdigit(str[i + 1]) == 0)
			return (false);
		else
			i++;
	}
	while (i < (str_len - 1))
	{
		if (isdigit(str[i]) != 0)
			i++;
		else if (str[i] == '.')
		{
			if (isdigit(str[i + 1]) == 0
				|| isdigit(str[i - 1]) == 0)
				return (false);
			else
				i++;
		}
		else
			return (false);
	}
	return (true);
}

bool	ScalarConversion::isNumberAnFloat(std::string str)
{
	size_t i = 0;
	size_t min_len;
	size_t str_len = str.length();
	int	dotCount = 0;
	int	fCount = 0;

	if (str[i] == '+' || str[i] == '-')
	{
		i++;
		min_len = 4;
	}
	else
		min_len = 3;
	if (min_len > str_len)
		return (false);
	if (str.find(".") == std::string::npos)
		return (false);
	for (size_t j = 0; j < str_len; j++)
	{
		if (str[j] == '.')
			dotCount++;
		else if (str[j] == 'f')
			fCount++;
	}
	if (dotCount > 1 || fCount > 1)
		return (false);
	if (str[i] == '.')
	{
		if (isdigit(str[i + 1]) == 0)
			return (false);
		else
			i++;
	}
	while (i < (str_len - 1))
	{
		if (isdigit(str[i]) != 0)
			i++;
		else if (str[i] == '.')
		{
			if (isdigit(str[i - 1]) == 0)
				return (false);
			else if ((isdigit(str[i + 1]) == 0)
				&& str[i + 1] != 'f')
				return (false);
			else
				i++;
		}
		else
			return (false);
	}
	return (true);
}

bool	ScalarConversion::isNumberAnInt(std::string str)
{
	size_t i = 0;
	size_t min_len;
	size_t str_len = str.length();

	if (str[i] == '+' || str[i] == '-')
	{
		i++;
		min_len = 2;
	}
	else
		min_len = 1;
	if (min_len > str_len)
		return (false);
	while (i < (str_len - 1))
	{
		if (isdigit(str[i]) == 0)
			return (false);
		i++;
	}
	if (str[i] == '\0' && isNumberInIntRange(str) == false)
		return (false);
	return (true);
}

bool	ScalarConversion::isNumberInIntRange(std::string str)
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

// void	ScalarConversion::identifyType()
// {
// 	return;
// }