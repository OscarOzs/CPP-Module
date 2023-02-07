/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:28:09 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/07 16:15:20 by oozsertt         ###   ########.fr       */
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

bool	ScalarConversion::isInputValid() const
{
	
}

// void	ScalarConversion::identifyType()
// {
// 	return;
// }