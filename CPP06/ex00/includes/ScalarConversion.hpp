/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:39:44 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/10 05:50:59 by oozsertt         ###   ########.fr       */
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

	bool	isInputValid() const;
	static bool	isSignInputValid(std::string str, char sign);
	static bool	isFloatInputValid(std::string str);
	static bool	isPointInputValid(std::string str);
	static bool	isNumberInRange(std::string str);
	// void	identifyType();
};

std::ostream & operator<<(std::ostream & o, ScalarConversion const & i);

#endif