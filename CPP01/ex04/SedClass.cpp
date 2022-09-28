/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:35:52 by oozsertt          #+#    #+#             */
/*   Updated: 2022/09/28 12:00:34 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SedClass.hpp"

void	SedClass::exe_sed(void) const
{
	std::ofstream	ofs(this->_replace);
	std::ifstream	ifs(this->_file);
	std::string		str;
	size_t			occurence;

	while (1)
	{
		getline(ifs, str);
		occurence = str.find(this->_s1);
		while (occurence != std::string::npos)
		{
			str.erase(occurence, this->_s1.length());
			str.insert(occurence, this->_s2);
			occurence = str.find(this->_s1, occurence+1);
		}
		ofs << str;
		if (ifs.eof() == false)
			ofs << '\n';
		else
			break;
	}
	ofs.close();
	ifs.close();
	return;
}

char*	SedClass::set_replacefile(char *filename) const
{
	std::string str;
	size_t		str_len;
	size_t		i = 0;

	str.assign(filename);
	str.append(".replace");
	str_len = str.length();
	char*		replace_file = new char[str_len + 1];
	while (i < str_len)
	{
		replace_file[i] = str[i];
		i++;
	}
	replace_file[i] = '\0';
	return (replace_file);
}

SedClass::SedClass(char *filename, char *arg2, char *arg3):
_file(filename), _s1(arg2), _s2(arg3), _replace(set_replacefile(filename))
{
	return;
}

SedClass::~SedClass()
{
	delete [] this->_replace;
	return;
}