/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:14:35 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/13 09:11:46 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
public:
	Animal();
	Animal(Animal & src);
	virtual ~Animal();
	Animal & operator=(Animal & rhs);
	virtual void	makeSound() const;
	std::string getType() const;
protected:
	std::string type;
};

#endif