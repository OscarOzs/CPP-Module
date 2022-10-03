/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:01:37 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/03 16:05:11 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _FixedPointNumber(0)
{
	return;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return;
}

Fixed::Fixed(int const nbr)
{
	this->_FixedPointNumber = nbr << _NumberOfFractionalBits;
	return;
}

Fixed::Fixed(float const f)
{
	this->_FixedPointNumber = roundf(f * 256);
	return;
}

Fixed::~Fixed(void)
{
	return;
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->_FixedPointNumber > rhs._FixedPointNumber)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const // DONE
{
	if (this->_FixedPointNumber < rhs._FixedPointNumber)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const // DONE
{
	if (this->_FixedPointNumber >= rhs._FixedPointNumber)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const // DONE
{
	if (this->_FixedPointNumber <= rhs._FixedPointNumber)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const // DONE
{
	if (this->_FixedPointNumber == rhs._FixedPointNumber)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const // DONE
{
	if (this->_FixedPointNumber != rhs._FixedPointNumber)
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return Fixed((float)(this->_FixedPointNumber + rhs.getFixedPointNumber()) / 256);
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	Fixed res;

	res._FixedPointNumber = this->_FixedPointNumber - rhs._FixedPointNumber;
	return (res);
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	Fixed res;

	res._FixedPointNumber = roundf((this->toFloat() * rhs.toFloat()) * 256);
	return (res);
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	Fixed res;

	if (rhs.toFloat() == 0)
	{
		std::cerr << "Division by 0 is not possible" << std::endl;
		return (res);
	}
	res._FixedPointNumber = roundf((this->toFloat() / rhs.toFloat()) * 256);
	return (res);
}

Fixed	Fixed::operator++(int)
{
	Fixed	res(*this);

	++(*this);
	return (res);
}

Fixed &	Fixed::operator++(void)
{
	this->_FixedPointNumber++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	res(*this);

	--(*this);
	return (res);
}

Fixed &	Fixed::operator--(void)
{
	this->_FixedPointNumber--;
	return (*this);
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	this->_FixedPointNumber = rhs._FixedPointNumber;
	return (*this);
}

std::ostream & operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

int		Fixed::getFixedPointNumber(void) const
{
	return (this->_FixedPointNumber);
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

	res = this->_FixedPointNumber >> _NumberOfFractionalBits;
	return (res);
}

Fixed &	Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs.getFixedPointNumber() < rhs.getFixedPointNumber())
		return (lhs);
	else
		return (rhs);
}

const Fixed &	Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs.getFixedPointNumber() < rhs.getFixedPointNumber())
		return (lhs);
	else
		return (rhs);
}

Fixed & Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs.getFixedPointNumber() > rhs.getFixedPointNumber())
		return (lhs);
	else
		return (rhs);
}

const Fixed &	Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs.getFixedPointNumber() > rhs.getFixedPointNumber())
		return (lhs);
	else
		return (rhs);
}