/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:20:39 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/13 11:25:01 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "Default AAnimal constructor called" << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal & src)
{
	std::cout << "Copy AAnimal constructor called" << std::endl;
	this->type = src.type;
	return;
}

AAnimal::~AAnimal()
{
	std::cout << "Default AAnimal destructor called" << std::endl;
	return;
}

AAnimal & AAnimal::operator=(AAnimal & rhs)
{
	std::cout << "AAnimal asignation operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << "Unknow Aanimal sound" << std::endl;
	return;
}

std::string	AAnimal::getType() const
{
	return (this->type);
}