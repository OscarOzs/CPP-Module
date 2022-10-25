/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:09:58 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/25 11:31:03 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	this->_brain = new Brain();
	this->type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
	return;
}

Dog::Dog(Dog & src) : AAnimal(src)
{
	this->_brain = new Brain(*(src._brain));
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = src.type;
	for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = src._brain->ideas[i];
	return;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Default dog destructor called" << std::endl;
	return;
}

Dog & Dog::operator=(Dog & rhs)
{
	this->type = rhs.type;
	delete this->_brain;
	this->_brain = new Brain(*(rhs._brain));
	for (int i = 0; i < 100; i++)
		this->_brain->ideas[i] = rhs._brain->ideas[i];
	std::cout << "Dog asignation operator called" << std::endl;
	return (*this);
}

std::string	Dog::getBrain() const
{
	return (this->_brain->ideas[0]);
}

void	Dog::makeSound() const
{
	std::cout << "~Woof~" << std::endl;
	return;
}

void	Dog::setBrain(std::string idea)
{
	*this->_brain->ideas = idea;
	return;
}
