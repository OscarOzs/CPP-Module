/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:54:43 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/05 17:54:54 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_name = "Unknow";
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Parametric ScavTrap constructor called" << std::endl;
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	return;
}

ScavTrap::ScavTrap(ScavTrap & src)
: ClapTrap(src)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	this->_name = src._name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap &rhs)
{
	this->_name = rhs._name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode" << std::endl;
	return;
}

void	ScavTrap::attack(const std::string & target)
{
	if (this->_HitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " cannot attack, he's already dead." << std::endl;
	else if (this->_EnergyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " cannot attack, no energy points left." << std::endl;
	else
	{
		this->_EnergyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_AttackDamage << " points of damage. "
		<< this->_EnergyPoints << " Energy points left." << std::endl;
	}
	return;
}
