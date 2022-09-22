/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:34:30 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/22 08:48:13 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
public:
			Zombie(void);
			~Zombie(void);
	void	announce(void) const;
	void	setName(std::string str);

private:
	std::string name;
};

Zombie*	zombieHorde(int N, std::string name);
void	delete_zombietab(Zombie* zombie_tab);
	
#endif