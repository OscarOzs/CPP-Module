/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:20:39 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/01 18:42:53 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
	return;
}

Animal::Animal(Animal & src)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	this->type = src.type;
	return;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
	return;
}

Animal & Animal::operator=(Animal & rhs)
{
	std::cout << "Animal asignation operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Unknow animal sound" << std::endl;
	return;
}

std::string	Animal::getType() const
{
	return (this->type);
}

std::string Animal::getBrain() const
{
	std::cout << "Animal base class does not have brain" << std::endl;
	return (NULL);
}

void	Animal::setBrain(std::string idea)
{
	std::cout << "Animal base class does not have brain, ";
	std::cout << idea << " Cannot be set";
	return;
}