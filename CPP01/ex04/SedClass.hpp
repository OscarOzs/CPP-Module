/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:34:47 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/28 12:00:57 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDCLASS_HPP
# define SEDCLASS_HPP

# include "sed.hpp"

class SedClass
{
public:
	SedClass(char *filename, char *arg2, char *arg3);
	char*	set_replacefile(char *filename) const;
	void	exe_sed(void) const;
	~SedClass();
private:
	char* const			_file;
	std::string const	_s1;
	std::string const	_s2;
	char* const			_replace;
};




#endif