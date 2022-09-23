/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:10:30 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/23 12:03:52 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
public:
	Weapon(std::string weapon);
	~Weapon();
	std::string const & getType(void);
	void				setType(std::string weapon_to_set);

private:
	std::string _type;
};


#endif