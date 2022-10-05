/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:54:21 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/05 17:54:31 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap & src);
	~ClapTrap();
	ClapTrap & operator=(ClapTrap & rhs);
	void		attack(const std::string & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
protected:
	std::string	_name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;
};

#endif