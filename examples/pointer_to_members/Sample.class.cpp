/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:10:19 by oozsertt          #+#    #+#             */
/*   Updated: 2022/05/17 16:11:58 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Sample.class.hpp"

Sample::Sample(void) : Foo(0)
{
	std::cout << "Constructor called" << std::endl;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;

	return;
}

void	Sample::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;

	return;
}