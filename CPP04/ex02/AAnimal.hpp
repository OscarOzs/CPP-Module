/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:14:35 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/14 09:52:39 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
public:
	AAnimal();
	AAnimal(AAnimal & src);
	virtual ~AAnimal();
	AAnimal &		operator=(AAnimal & rhs);
	virtual void	makeSound() const = 0;
	std::string		getType() const;
	virtual std::string	getBrain() const = 0;
	virtual void	setBrain(std::string idea) = 0;
protected:
	std::string type;
};

#endif