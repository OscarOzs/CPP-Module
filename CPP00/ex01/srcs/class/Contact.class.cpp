/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:46:02 by oozsertt          #+#    #+#             */
/*   Updated: 2022/06/01 14:41:15 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

void	Contact::set_firstname(std::string input)
{
	this->first_name = input;
}

void	Contact::set_lastname(std::string input)
{
	this->last_name = input;
}

void	Contact::set_nickname(std::string input)
{
	this->nickname = input;
}

void	Contact::set_phonenumber(std::string input)
{
	this->phone_number = input;
}

void	Contact::set_darkestsecret(std::string input)
{
	this->darkest_secret = input;
}