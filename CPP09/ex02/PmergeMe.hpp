/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:06:22 by oozsertt          #+#    #+#             */
/*   Updated: 2023/05/17 13:56:13 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <string>
# include <vector>
# include <deque>
# include <ctime>
# include <algorithm>

bool	arg_is_valid(char **av);

template<typename T>
void	printTab(T &tab)
{
	typename T::iterator it;

	for (it = tab.begin(); it != tab.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template<typename T>
static void	sortEachPair(T &tab)
{
	for (unsigned long i = 0; i < tab.size(); i += 2)
	{
		if (tab[i + 1] && tab[i + 1] < tab[i])
			std::swap(tab[i], tab[i + 1]);
	}
}

template<typename T>
static void	sortPairTogether(T &tab, unsigned long i = 1)
{
	if (i > tab.size())
		return ;
	for (unsigned long j = i + 2; j < tab.size(); j += 2)
	{
		if (tab[j] < tab[i])
		{
			std::swap(tab[i], tab[j]);
			std::swap(tab[i - 1], tab[j - 1]);
		}
	}
	sortPairTogether(tab, i + 2);
}

template<typename T>
static void	fillMainAndPending(T &tab, T &main, T &pending)
{
	for (unsigned long i = 0; i < tab.size(); i++)
	{
		if ((i % 2) == 0)
			pending.push_back(tab[i]);
		else
			main.push_back(tab[i]);
	}
	main.insert(main.begin(), pending[0]);
	pending.erase(pending.begin());
}

template<typename T>
static void	binaryInsert(T &main, T &pending)
{
	typename T::iterator it;

	for (size_t i = 0; i < pending.size(); i++)
	{
		it = std::lower_bound(main.begin(), main.end(), pending[i]);
		if (it != main.end())
			main.insert(it, pending[i]);
		else
			main.push_back(pending[i]);
	}
}

template<typename T>
void	mergeInsertSort(T &tab)
{
	T	main;
	T	pending;

	sortEachPair(tab);
	sortPairTogether(tab);
	fillMainAndPending(tab, main, pending);
	tab.clear();
	binaryInsert(main, pending);
	pending.clear();
	tab.resize(main.size());
	std::copy(main.begin(), main.end(), tab.begin());
	main.clear();
}

#endif