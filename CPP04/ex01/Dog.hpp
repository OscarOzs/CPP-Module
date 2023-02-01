/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:09:44 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/01 18:06:06 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog & src);
	virtual ~Dog();
	Dog & operator=(Dog & rhs);
	virtual void	makeSound() const;
	virtual std::string	getBrain() const;
	virtual void	setBrain(std::string idea);
private:
	Brain* _brain;
};

#endif