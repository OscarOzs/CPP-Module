/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:02:01 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/13 10:37:13 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "None";
	return;
}

Brain::Brain(Brain & src)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i].clear();
	return;
}

Brain &	Brain::operator=(Brain & rhs)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}