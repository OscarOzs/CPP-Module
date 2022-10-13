/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:04:48 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/13 09:06:34 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat & src) : WrongAnimal(src)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	this->type = src.type;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called" << std::endl;
	return;
}

WrongCat & WrongCat::operator=(WrongCat & rhs)
{
	std::cout << "WrongCat asignation operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "~Miaou~" << std::endl;
	return;
}