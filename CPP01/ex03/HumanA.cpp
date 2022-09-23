/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:52:01 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/23 12:25:00 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
: _name(name), _WeaponRef(weapon)
{
	return;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_WeaponRef.getType() << std::endl;
	return;
}

HumanA::~HumanA(void)
{
	return;
}