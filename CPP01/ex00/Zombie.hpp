/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:31:42 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/21 12:49:15 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
public:
			Zombie(std::string given_name);
			~Zombie(void);
	void	announce(void);

private:
	std::string name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);
void	delete_function(Zombie* zombie_to_delete);

#endif