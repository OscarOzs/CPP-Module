/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:01:35 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/03 15:54:22 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(int const nbr);
	Fixed(float const f);
	~Fixed();

	bool	operator>(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;
	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;
	Fixed	operator++(int);
	Fixed &	operator++(void);
	Fixed	operator--(int);
	Fixed &	operator--(void);
	Fixed & operator=(Fixed const &rhs);

	int		getFixedPointNumber(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;
	static Fixed &	min(Fixed &lhs, Fixed &rhs);
	static const Fixed &	min(Fixed const &lhs, Fixed const &rhs);
	static Fixed &	max(Fixed &lhs, Fixed &rhs);
	static const Fixed &	max(Fixed const &lhs, Fixed const &rhs);
	
private:
	int		_FixedPointNumber;
	static const int	_NumberOfFractionalBits = 8;
};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);

#endif