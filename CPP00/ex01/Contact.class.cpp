/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:46:02 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/20 11:09:17 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

std::string Contact::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}

std::string Contact::get_phone_number(void) const
{
	return (this->phone_number);
}

std::string	Contact::get_nickname(void) const
{
	return (this->nickname);
}

std::string	Contact::get_last_name(void) const
{
	return (this->last_name);
}

std::string	Contact::get_first_name(void) const
{
	return (this->first_name);
}

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