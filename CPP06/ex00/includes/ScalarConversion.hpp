/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:39:44 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/11 05:03:00 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

////tmp
# define ICI std::cout << "ICI" << std::endl;
////tmp

# include <iostream>
# include <string>
# include <limits.h>
# include <cstdlib>

class ScalarConversion
{
public:
	ScalarConversion(char *input);
	ScalarConversion(ScalarConversion const & src);
	~ScalarConversion();

	char	getCharValue() const;
	int		getIntValue() const;
	float	getFloatValue() const;
	double	getDoubleValue() const;

	ScalarConversion & operator=( ScalarConversion const & rhs);
	
private:
	std::string _input;
	char		_charValue;
	int			_intValue;
	float		_floatValue;
	double		_doubleValue;
	std::string *_output_tab;

	bool	_isLiteralNickname;
	bool	_isChar;
	bool	_isInt;
	bool	_isFloat;
	bool	_isDouble;

	bool	parseAndCheckInput();
	static bool	isNumberAnInt(std::string str);
	static bool	isNumberAnFloat(std::string str);
	static bool	isNumberAnDouble(std::string str);
	
	static bool	isNumberInIntRange(std::string str);
	// void	identifyType();
};

std::ostream & operator<<(std::ostream & o, ScalarConversion const & i);

#endif