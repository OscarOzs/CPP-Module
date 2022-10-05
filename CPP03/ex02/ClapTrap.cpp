/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:53:59 by oozsertt          #+#    #+#             */
/*   Updated: 2022/10/05 17:54:12 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	this->_name = "Unknow";
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	return;
}

ClapTrap::ClapTrap(std::string name): _name(name),
_HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Parametric ClapTrap constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap & src)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	this->_name = src._name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap &rhs)
{
	this->_name = rhs._name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string & target)
{
	if (this->_HitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " cannot attack, he's already dead." << std::endl;
	else if (this->_EnergyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " cannot attack, no energy points left." << std::endl;
	else
	{
		this->_EnergyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_AttackDamage << " points of damage. "
		<< this->_EnergyPoints << " Energy points left." << std::endl;
	}
	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " cannot take damage, he's already dead." << std::endl;
	else
	{
		this->_HitPoints-= amount;
		std::cout << "ClapTrap " << this->_name << " take " << amount
		<< " point(s) of damage.";
		if (this->_HitPoints <= 0)
			std::cout << " ClapTrap " << this->_name << " has died.";
		else
			std::cout << " ClapTrap " << this->_name << " has " << this->_HitPoints << " HP left.";
		std::cout << std::endl;
	}
	return;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " cannot repair himself, he's already dead." << std::endl;
	else if (this->_EnergyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " cannot repair himself, no energy points left." << std::endl;
	else
	{
		this->_EnergyPoints--;
		this->_HitPoints+= amount;
		std::cout << "ClapTrap " << this->_name << " has repaired and regains "
		<< amount << " HitPoint(s). " << this->_HitPoints << " left." << std::endl;
	}
	return;
}
