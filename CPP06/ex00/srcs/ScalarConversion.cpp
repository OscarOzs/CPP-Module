/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:28:09 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/09 04:58:45 by oozsertt         ###   ########.fr       */
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
	
	if ((str.compare("-inff") == 0) || (str.compare("+inff") == 0)
		|| (str.compare("nanf") == 0))
		return (true);
	else if (str.find_first_not_of("f.-+0123456789") == std::string::npos)
		return (false);
	else if (str[0] == '+' && (isPlusInputValid(str) == false))
		return (false);
	// else if ()
}

bool	ScalarConversion::isPlusInputValid(std::string str)
{
	for (int i = 1; i < str.length(); i++)
	{
		if (str[i] == 'f' && isdigit(str[i - 1]) == false)
			return (false);
	}
	return (true);
}

// void	ScalarConversion::identifyType()
// {
// 	return;
// }