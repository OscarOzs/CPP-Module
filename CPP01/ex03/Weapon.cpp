/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:25:38 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/23 10:40:56 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	setType(weapon);
	return;
}

void	Weapon::setType(std::string weapon_to_set)
{
	this->_type = weapon_to_set;
	return;
}

std::string const & Weapon::getType(void)
{
	return (this->_type);
}

Weapon::~Weapon(void)
{
	return;
}