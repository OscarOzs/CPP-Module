/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:11:19 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/30 08:48:45 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{

public:
	Fixed();
	Fixed(Fixed & src);
	~Fixed();

	Fixed & operator=(Fixed & rhs);
	int		getRawBits(void);
	void	setRawBits(int const raw);
private:
	int					_FixedPointNumber;
	static const int	_NumberOfFractionalBits = 8;
};

#endif