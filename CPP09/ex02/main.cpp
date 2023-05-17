/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:06:15 by oozsertt          #+#    #+#             */
/*   Updated: 2023/05/17 13:48:14 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	std::vector<int> vec;
	std::deque<int> deq;

	if (ac > 2)
	{
		if (arg_is_valid(&av[1]) == false)
		{
			std::cout << "Error: every arguments must be positive numbers" << std::endl;
			return (2);
		}
		clock_t	start;
		clock_t	end;
		double	time;

		for (int i = 1; av[i]; i++)
		{
			vec.push_back(atoi(av[i]));
			deq.push_back(atoi(av[i]));
		}
		
		std::cout << "Before:\t";
		printTab(vec);
		start = clock();
		mergeInsertSort(vec);
		end = clock();
		time = (end - start) / (double)(CLOCKS_PER_SEC / 1000);
		std::cout << "After:\t";
		printTab(vec);
		std::cout << std::fixed << std::setprecision(3) << "Time to process a range of " << vec.size() << " elements with std::vector : " << time << " ms" << std::endl;

		start = clock();
		mergeInsertSort(deq);
		end = clock();
		time = (end - start) / (double)(CLOCKS_PER_SEC / 1000);
		std::cout << std::fixed << std::setprecision(3) << "Time to process a range of " << deq.size() << " elements with std::deque : " << time << " ms" << std::endl;
	}
	else
	{
		std::cout << "Error: program requires at least 2 arguments" << std::endl;
		return (1);
	}
	return (0);
}
