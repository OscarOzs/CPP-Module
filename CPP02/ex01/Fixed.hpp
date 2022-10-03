/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:22:57 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/30 13:42:05 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const & src);
	Fixed(int const nbr);
	Fixed(float const f);
	~Fixed();

	Fixed & operator=(Fixed const & rhs);
	float	toFloat(void) const;
	int		toInt(void) const;
private:
	int		_FixedPointNumber;
	static const int	_NumberOfFractionalBits = 8;
};

std::ostream & operator<<(std::ostream &lhs, Fixed const &rhs);

#endif