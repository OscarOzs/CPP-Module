/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:39:44 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/12 15:35:14 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

////tmp
# define ICI std::cout << "ICI" << std::endl;
////tmp

# include <iostream>
# include <sstream>
# include <string>
# include <limits.h>
# include <cstdlib>
# include <cctype>
# include <float.h>

class ScalarConversion
{
public:
	ScalarConversion(char *input);
	ScalarConversion(ScalarConversion const & src);
	~ScalarConversion();

	char		getCharValue() const;
	int			getIntValue() const;
	float		getFloatValue() const;
	double		getDoubleValue() const;
	std::string	getCharTab() const;
	std::string	getIntTab() const;
	std::string	getFloatTab() const;
	std::string	getDoubleTab() const;

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
	static bool	isNumberInFloatRange(std::string str);
	
	void	convertAndFillTab();
	void	assignValue();
	void	fillTabLiteralValue();
	void	fillCharTab();
	void	fillIntTab();
};

std::ostream & operator<<(std::ostream & o, ScalarConversion const & i);

#endif