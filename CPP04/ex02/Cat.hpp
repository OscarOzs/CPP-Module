/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:23:28 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/13 17:50:55 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
public:
	Cat();
	Cat(Cat & src);
	virtual ~Cat();
	Cat &	operator=(Cat & rhs);
	virtual void	makeSound() const;
	virtual std::string	getBrain() const;
	virtual void	setBrain(std::string idea);
private:
	Brain* _brain;
};

#endif