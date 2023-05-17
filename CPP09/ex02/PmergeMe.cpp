/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:06:19 by oozsertt          #+#    #+#             */
/*   Updated: 2023/05/17 12:15:05 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	arg_is_valid(char **av)
{
	int	i = 0;
	int j;

	while (av[i] != NULL)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (!isdigit(av[i][j]))
			{
				std::cout << av[i] << std::endl;
				return (false);
			}
			j++;
		}
		i++;
	}
	return (true);
}
