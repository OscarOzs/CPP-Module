/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:28:09 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/17 02:34:40 by oozsertt         ###   ########.fr       */
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
		this->_isInputValid = false;
		return ;
	}
	else
	{
		this->_isInputValid = true;
		this->_output_tab[0] = "char: ";
		this->_output_tab[1] = "int: ";
		this->_output_tab[2] = "float: ";
		this->_output_tab[3] = "double: ";
		convertAndFillTab();
		printTab();
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
	this->_isInputValid = src._isInputValid;

	this->_output_tab = new std::string[4];
    for (int i = 0; i < 4; i++)
	{
        this->_output_tab[i] = src._output_tab[i];
	}
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
		this->_isInputValid = rhs._isInputValid;
		for (int i = 0; i < 4; i++)
		{
        	this->_output_tab[i] = rhs._output_tab[i];
		}
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, ScalarConversion const & rhs)
{
	if (rhs.getIsInputValidBool() == true)
	{
		o << rhs.getCharTab() << std::endl;
		o << rhs.getIntTab() << std::endl;
		o << rhs.getFloatTab() << std::endl;
		o << rhs.getDoubleTab();
	}
	else
		o << "Input is invalid, cannot print conversion";
	return o;
}

////////////////////////////////////// ACCESSOR ////////////////////////////////

bool	ScalarConversion::getIsInputValidBool() const
{
	return (this->_isInputValid);
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

std::string	ScalarConversion::getCharTab() const
{
	return (this->_output_tab[0]);
}

std::string	ScalarConversion::getIntTab() const
{
	return (this->_output_tab[1]);
}

std::string	ScalarConversion::getFloatTab() const
{
	return (this->_output_tab[2]);
}

std::string	ScalarConversion::getDoubleTab() const
{
	return (this->_output_tab[3]);
}

////////////////////////////////////// METHOD /////////////////////////////////


////// PARSING

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
	char *endptr;
	double	tmp;

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
	tmp = strtod(this->_input.c_str(), &endptr);
	if (tmp == HUGE_VAL || tmp == -HUGE_VAL)
		return (false);
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
	if (isNumberInFloatRange(str) == false)
		return (false);
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
	while (i < str_len)
	{
		if (isdigit(str[i]) == 0)
			return (false);
		i++;
	}
	if (isNumberInIntRange(str) == false)
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

bool	ScalarConversion::isNumberInFloatRange(std::string str)
{
	char	*endptr;

	double number = std::strtod(str.c_str(), & endptr);
	if (number > FLT_MAX)
		return (false);
	else if (number < -FLT_MAX && number != 0)
		return (false);
	else
		return (true);
}

///// CONVERSION

void	ScalarConversion::printTab() const
{
	for (int i = 0; i < 4; i++)
		std::cout << this->_output_tab[i] << std::endl;
}

void	ScalarConversion::convertAndFillTab()
{
	char*	endptr;

	if (this->_isChar == true)
	{
		this->_charValue = static_cast<char>(this->_input[0]);
		this->_intValue = static_cast<int>(this->_charValue);
		this->_floatValue = static_cast<float>(this->_charValue);
		this->_doubleValue = static_cast<double>(this->_charValue);
		fillCharTab();
		fillIntTab();
		fillFloatTab();
		fillDoubleTab();
	}
	else if (this->_isInt == true)
	{
		this->_intValue = atoi(this->_input.c_str());
		this->_charValue = static_cast<char>(this->_intValue);
		this->_floatValue = static_cast<float>(this->_intValue);
		this->_doubleValue = static_cast<double>(this->_intValue);
		fillCharTab();
		fillIntTab();
		fillFloatTab();
		fillDoubleTab();
	}
	else if (this->_isFloat == true)
	{
		this->_floatValue = strtof(this->_input.c_str(), NULL);
		this->_charValue = static_cast<char>(this->_floatValue);
		this->_intValue = static_cast<int>(this->_floatValue);
		this->_doubleValue = static_cast<double>(this->_floatValue);
		fillCharTab();
		fillIntTab();
		fillFloatTab();
		fillDoubleTab();
	}
	else if (this->_isDouble == true)
	{
		this->_doubleValue = strtod(this->_input.c_str(), &endptr);
		this->_charValue = static_cast<char>(this->_doubleValue);
		this->_intValue = static_cast<int>(this->_doubleValue);
		this->_floatValue = static_cast<float>(this->_doubleValue);
		fillCharTab();
		fillIntTab();
		fillFloatTab();
		fillDoubleTab();
	}
	else
		fillTabLiteralValue();
	return;
}

void	ScalarConversion::fillDoubleTab()
{
	std::ostringstream stream;
	std::ostringstream tmp;
	std::string str;

	if (this->_isLiteralNickname == true)
		return;
	else if (this->_isChar == true)
	{
		stream << this->_output_tab[3];
		stream << (int)this->_charValue;
		stream << ".0";
		this->_output_tab[3] = stream.str();
	}
	else if (this->_isInt == true)
	{
		stream << this->_output_tab[3];
		stream << std::fixed << this->_doubleValue;
		tmp << this->_doubleValue;
		str = tmp.str();
		if (str.find(".") == std::string::npos)
			stream << ".0";
		this->_output_tab[3] = stream.str();
	}
	else if (this->_isFloat == true)
	{
		stream << this->_output_tab[3];
		stream << std::fixed << this->_floatValue;
		tmp << this->_floatValue;
		str = tmp.str();
		if (str.find(".") == std::string::npos && str.compare("inf") != 0)
			stream << ".0";
		this->_output_tab[3] = stream.str();
	}
	else
	{
		stream << this->_output_tab[3];
		stream << std::fixed << this->_doubleValue;
		tmp << this->_floatValue;
		str = tmp.str();
		if (str.find(".") == std::string::npos)
			stream << ".0";
		this->_output_tab[3] = stream.str();
	}
}

void	ScalarConversion::fillFloatTab()
{
	std::ostringstream stream;
	std::ostringstream tmp;
	std::string str;

	if (this->_isLiteralNickname == true)
		return;
	else if (this->_isChar == true)
	{
		stream << this->_output_tab[2];
		stream << (int)this->_charValue;
		stream << ".0f";
		this->_output_tab[2] = stream.str();
	}
	else if (this->_isInt == true)
	{
		stream << this->_output_tab[2];
		stream << std::fixed << this->_floatValue;
		tmp << this->_floatValue;
		str = tmp.str();
		if (str.find(".") == std::string::npos)
			stream << ".0f";
		else
			stream << "f";
		this->_output_tab[2] = stream.str();
	}
	else if (this->_isDouble == true)
	{
		stream << this->_output_tab[2];
		stream << std::fixed << this->_floatValue;
		tmp << this->_floatValue;
		str = tmp.str();
		if (str.find(".") == std::string::npos)
			stream << ".0f";
		else
			stream << "f";
		this->_output_tab[2] = stream.str();
	}
	else
	{
		stream << this->_output_tab[2];
		stream << std::fixed << this->_floatValue;
		tmp << this->_floatValue;
		str = tmp.str();
		if (str.find(".") == std::string::npos)
			stream << ".0f";
		else
			stream << "f";
		this->_output_tab[2] = stream.str();
	}
}

void	ScalarConversion::fillIntTab()
{
	std::ostringstream stream;
	
	if (this->_isLiteralNickname == true)
		this->_output_tab[1] += "impossible";
	else if (this->_isChar == true)
	{
		stream << this->_output_tab[1];
		stream << (int)this->_charValue;
		this->_output_tab[1] = stream.str();
	}
	else if (this->_isFloat == true)
	{
		if (static_cast<long>(this->_floatValue) < INT_MAX
			&& static_cast<long>(this->_floatValue) > INT_MIN)
		{
			stream << this->_output_tab[1];
			stream << this->_intValue;
			this->_output_tab[1] = stream.str();
		}
		else
			this->_output_tab[1] += "impossible";
	}
	else if (this->_isDouble == true)
	{
		if (static_cast<long>(this->_doubleValue) <= INT_MAX
			&& static_cast<long>(this->_doubleValue) >= INT_MIN)
		{
			stream << this->_output_tab[1];
			stream << this->_intValue;
			this->_output_tab[1] = stream.str();
		}
		else
			this->_output_tab[1] += "impossible";
	}
	else
	{
		stream << this->_output_tab[1];
		stream << this->_intValue;
		this->_output_tab[1] = stream.str();
	}
}

void	ScalarConversion::fillCharTab()
{
	int		nbr;
	std::string toPutInTab;
	
	nbr = atoi(this->_input.c_str());
	if (this->_isLiteralNickname == true)
		this->_output_tab[0] += "impossible";
	else if (nbr > 127 || nbr < 0) // to not segfault with isprint
		this->_output_tab[0] += "Non displayable";
	else if (isprint(nbr) != false || this->_isChar == true)
	{
		toPutInTab = std::string(1, this->_charValue);
		toPutInTab.insert(0, 1, '\'');
		toPutInTab.insert(2, 1, '\'');
		this->_output_tab[0] += toPutInTab;
	}
	else
		this->_output_tab[0] += "Non displayable";
}

void	ScalarConversion::fillTabLiteralValue()
{
	std::string str;

	str.assign(this->_input);
	this->_output_tab[0] += "impossible";
	this->_output_tab[1] += "impossible";
	if (str.compare("-inff") == 0 || str.compare("-inf") == 0)
	{
		this->_output_tab[2] += "-inff";
		this->_output_tab[3] += "-inf";
	}
	else if (str.compare("+inff") == 0 || str.compare("+inf") == 0)
	{
		this->_output_tab[2] += "+inff";
		this->_output_tab[3] += "+inf";
	}
	else if (str.compare("nanf") == 0 || str.compare("nan") == 0)
	{
		this->_output_tab[2] += "nanf";
		this->_output_tab[3] += "nan";
	}
	return ;
}
