/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 06:05:00 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/25 06:57:02 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template<typename U>
void	print(U * value)
{
	std::cout << *value << std::endl;
}

template<typename T>
void	iter(T const &tab, int tab_size, void (*function)(const T))
{
	for (int i = 0; i < tab_size; i++)
	{
		function(&tab[i]);
	}
}

#endif