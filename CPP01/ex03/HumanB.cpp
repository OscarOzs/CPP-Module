/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:05:46 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/23 12:48:58 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	return;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_WeaponPtr->getType() << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_WeaponPtr = &weapon;
	return;
}

HumanB::~HumanB(void)
{
	return;
}