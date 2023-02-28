/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 05:46:44 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/28 07:07:20 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <vector>
# include <list>
# include <deque>
# include <map>
# include <algorithm>

template<typename T>
typename T::iterator	easyfind(T &src, int to_find);

# include "easyfind.tpp"

#endif