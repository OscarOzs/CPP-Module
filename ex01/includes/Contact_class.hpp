/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 20:23:06 by oozsertt          #+#    #+#             */
/*   Updated: 2022/06/01 14:40:43 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
public:

	void	set_firstname(std::string input);
	void	set_lastname(std::string input);
	void	set_nickname(std::string input);
	void	set_phonenumber(std::string input);
	void	set_darkestsecret(std::string input);

private:

	std::string	first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string	darkest_secret;
};

#endif