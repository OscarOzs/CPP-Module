/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:42:13 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/20 13:42:16 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
public:

	void		set_firstname(std::string input);
	void		set_lastname(std::string input);
	void		set_nickname(std::string input);
	void		set_phonenumber(std::string input);
	void		set_darkestsecret(std::string input);
	std::string	get_first_name(void) const;
	std::string	get_last_name(void) const;
	std::string	get_nickname(void) const;
	std::string get_phone_number(void) const;
	std::string get_darkest_secret(void) const;

private:

	std::string	first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string	darkest_secret;
};

#endif