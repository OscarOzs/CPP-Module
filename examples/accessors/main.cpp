/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:21:24 by oozsertt          #+#    #+#             */
/*   Updated: 2022/05/16 18:27:36 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Sample.class.hpp"

int main(void)
{
	Sample instance;

	instance.setFoo(42);
	std::cout << "instance.getFoo() : " << instance.getFoo() << std::endl;
	instance.setFoo(-42);
	std::cout << "instance.getFoo() : " << instance.getFoo() << std::endl;
	
	return (0);
}