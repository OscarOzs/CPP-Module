/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:59:05 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/13 09:15:06 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal & src);
	virtual ~WrongAnimal();
	WrongAnimal & operator=(WrongAnimal & rhs);
	void	makeSound() const;
	std::string getType() const;
protected:
	std::string type;
};

#endif