/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:09:58 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/13 09:01:22 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
	return;
}

Dog::Dog(Dog & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = src.type;
	return;
}

Dog::~Dog()
{
	std::cout << "Default dog destructor called" << std::endl;
	return;
}

Dog & Dog::operator=(Dog & rhs)
{
	std::cout << "Dog asignation operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "~Woof~" << std::endl;
	return;
}
