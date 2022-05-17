/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:12:03 by oozsertt          #+#    #+#             */
/*   Updated: 2022/05/17 16:16:03 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Sample.class.hpp"

int main(void)
{
	Sample	instance;
	Sample	*instancep = &instance;

	int	Sample::*p = NULL;
	void	(Sample::*f)(void) const;

	p = &Sample::Foo;

	std::cout << "Value of member foo: " << instance.Foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.Foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.Foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	return (0);
}