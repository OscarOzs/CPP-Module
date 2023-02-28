/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 05:46:57 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/28 06:24:42 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

template<typename T>
typename T::iterator	easyfind(T &src, int to_find)
{
	typename T::iterator it;

	if (src.size() == 0)
		throw std::invalid_argument("Array is empty");
	it = std::find(src.begin(), src.end(), to_find);
	if (it == src.end())
		throw std::invalid_argument("No occurence found");
	else
		return (it);
}