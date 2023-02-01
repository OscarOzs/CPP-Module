/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:23:28 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/01 18:32:53 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
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