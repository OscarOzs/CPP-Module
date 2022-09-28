/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:21:30 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/28 12:51:32 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
public:
	Harl();
	void	complain(std::string level);
	~Harl();
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

typedef struct	s_harl_message
{
	std::string level;
	void	(Harl::*f)(void);
}				t_message;


#endif