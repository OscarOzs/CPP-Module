/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:14:35 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/01 18:32:50 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
public:
	Animal();
	Animal(Animal & src);
	virtual ~Animal();
	Animal &		operator=(Animal & rhs);
	virtual void	makeSound() const;
	std::string		getType() const;
	virtual std::string	getBrain() const;
	virtual void	setBrain(std::string idea);
protected:
	std::string type;
};

#endif