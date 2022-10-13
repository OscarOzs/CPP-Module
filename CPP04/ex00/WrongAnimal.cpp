/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:02:50 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/13 09:06:09 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal & src)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	this->type = src.type;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor called" << std::endl;
	return;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal & rhs)
{
	std::cout << "WrongAnimal asignation operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Unknow WrongAnimal sound" << std::endl;
	return;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}