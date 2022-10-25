/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:05:22 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/25 11:31:30 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	this->_brain = new Brain();
	this->type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
	return;
}

Cat::Cat(Cat & src) : AAnimal(src)
{
	this->_brain = new Brain(*(src._brain));
	std::cout << "Copy Cat constructor called" << std::endl;
	this->type = src.type;
	for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = src._brain->ideas[i];
	return;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Default Cat destructor called" << std::endl;
	return;
}

Cat & Cat::operator=(Cat & rhs)
{
	this->type = rhs.type;
	delete this->_brain;
	this->_brain = new Brain(*(rhs._brain));
	for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = rhs._brain->ideas[i];
	std::cout << "Cat asignation operator called" << std::endl;
	return (*this);
}

std::string	Cat::getBrain() const
{
	return (this->_brain->ideas[0]);
}

void	Cat::makeSound() const
{
	std::cout << "~Meow~" << std::endl;
	return;
}

void	Cat::setBrain(std::string idea)
{
	*this->_brain->ideas = idea;
	return;
}
