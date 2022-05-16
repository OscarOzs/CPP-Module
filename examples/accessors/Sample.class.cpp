/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:16:20 by oozsertt          #+#    #+#             */
/*   Updated: 2022/05/16 18:21:19 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor Called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int		Sample::getFoo(void) const
{
	return (this->_Foo);
}

void	Sample::setFoo(int v)
{
	if (v >= 0)
		this->_Foo = v;

	return;
}