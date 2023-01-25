/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:22:59 by oozsertt          #+#    #+#             */
/*   Updated: 2023/01/25 17:04:08 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _FixedPointNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(int const nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->_FixedPointNumber = nbr << this->_NumberOfFractionalBits;
	return;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_FixedPointNumber = roundf(f * 256);
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_FixedPointNumber = rhs._FixedPointNumber;
	return (*this);
}

float	Fixed::toFloat(void) const
{
	float res;
	
	res = (float)this->_FixedPointNumber / 256;
	return (res);
}

int		Fixed::toInt(void) const
{
	int res;

	res = this->_FixedPointNumber >> this->_NumberOfFractionalBits;
	return (res);
}

std::ostream & operator<<(std::ostream &lhs, Fixed const &rhs)
{
	lhs << rhs.toFloat();
	return (lhs);
}