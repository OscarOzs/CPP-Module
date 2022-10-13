/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:05:22 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/13 09:01:17 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
	return;
}

Cat::Cat(Cat & src) : Animal(src)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	this->type = src.type;
	return;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
	return;
}

Cat & Cat::operator=(Cat & rhs)
{
	std::cout << "Cat asignation operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "~Meow~" << std::endl;
	return;
}
