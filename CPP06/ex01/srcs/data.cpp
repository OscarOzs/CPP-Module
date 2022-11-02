/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:06:02 by oozsertt          #+#    #+#             */
/*   Updated: 2022/11/02 11:27:42 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "data.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	ret = reinterpret_cast<uintptr_t>(ptr);
	return (ret);
}

Data*		deserialize(uintptr_t raw)
{
	Data* ret = reinterpret_cast<Data *>(raw);
	return (ret);
}
