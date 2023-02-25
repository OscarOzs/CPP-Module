/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 05:39:08 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/25 05:56:15 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

template<typename T>
void	swap(T & a, T & b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T &	min(T & a, T & b)
{
	if (b <= a)
		return (b);
	else
		return (a);
}

template<typename T>
T &	max(T & a, T & b)
{
	if (b >= a)
		return (b);
	else
		return (a);
}

#endif