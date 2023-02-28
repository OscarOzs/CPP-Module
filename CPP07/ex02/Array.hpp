/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 01:43:34 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/28 04:08:36 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>

template<typename T>
class Array
{
	public:
	
		class IndexTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Index is out of _tab range");
				}
		};

		Array(void);
		Array(unsigned int n);
		Array(Array const & src);
		~Array();
	
		unsigned int	size(void) const;
	
		Array & operator=(Array const & rhs);
		T &		operator[](unsigned int i);

	private:
	
		T *				_tab;
		unsigned int	_size;
};

# include "Array.tpp"

#endif