/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 05:47:01 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/28 07:10:23 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

void	vectorIntFound()
{
	std::vector<int> tab;
	
	tab.push_back(10);
	tab.push_back(11);
	tab.push_back(12);
	tab.push_back(13);
	tab.push_back(14);
	tab.push_back(15);

	std::vector<int>::iterator it;
	try
	{
		it = easyfind(tab, 14);
		std::cout << "found value : " << (*it) << " at position " << std::distance(tab.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void	listIntFound()
{
	std::list<int> tab;
	
	tab.push_back(2041);
	tab.push_back(492);
	tab.push_back(1346);
	tab.push_back(6028);
	tab.push_back(6683);

	std::list<int>::iterator it;
	try
	{
		it = easyfind(tab, 1346);
		std::cout << "found value : " << (*it) << " at position " << std::distance(tab.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void	dequeIntFound()
{
	std::deque<int> tab;
	
	tab.push_back(7883);
	tab.push_back(1936);
	tab.push_back(4200);
	tab.push_back(7186);
	tab.push_back(1407);

	std::deque<int>::iterator it;
	try
	{
		it = easyfind(tab, 1407);
		std::cout << "found value : " << (*it) << " at position " << std::distance(tab.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void	vectorIntNotFound()
{
	std::vector<int> tab;
	
	tab.push_back(10);
	tab.push_back(11);
	tab.push_back(12);
	tab.push_back(13);
	tab.push_back(14);
	tab.push_back(15);

	std::vector<int>::iterator it;
	try
	{
		it = easyfind(tab, 156);
		std::cout << "found value : " << (*it) << " at position " << std::distance(tab.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void	vectorEmptyArray()
{
	std::vector<int> tab;
	
	std::vector<int>::iterator it;
	
	try
	{
		it = easyfind(tab, 156);
		std::cout << "found value : " << (*it) << " at position " << std::distance(tab.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}


int main(void)
{
	// vectorIntFound();
	// listIntFound();
	// dequeIntFound();
	// vectorIntNotFound();
	// vectorEmptyArray();
}