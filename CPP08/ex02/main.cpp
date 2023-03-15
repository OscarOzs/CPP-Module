/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:35:45 by oozsertt          #+#    #+#             */
/*   Updated: 2023/03/15 16:43:50 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"
# include <list>

void	subjectTest()
{
	std::cout << "MutantStack :" << std::endl;
	try
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
	}
		std::stack<int> s(mstack);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << "List :" << std::endl;
	try
	{
		std::list<int> a;
		a.push_back(5);
		a.push_back(17);
		std::cout << a.back() << std::endl;
		a.pop_back();
		std::cout << a.size() << std::endl;
		a.push_back(3);
		a.push_back(5);
		a.push_back(737);
		a.push_back(0);
		std::list<int>::iterator it = a.begin();
		std::list<int>::iterator ite = a.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	myTest()
{
	try
	{
		MutantStack<int> ms;
	
    	// Test push and pop
    	for (int i = 0; i < 5; i++)
    	    ms.push(i);
    	while (!ms.empty())
    	{
    	    std::cout << ms.top() << " ";
    	    ms.pop();
    	}
    	std::cout << std::endl;
	
    	// Test size and empty
    	std::cout << "Size: " << ms.size() << std::endl;
    	std::cout << "Empty: " << ms.empty() << std::endl;

		for (int i = 10; i < 100; i+= 10)
    	    ms.push(i);
	
    	// Test iterator
    	std::cout << "Using iterator: ";
    	for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); ++it)
    	    std::cout << *it << " ";
    	std::cout << std::endl;
	
    	// Test copy constructor
    	MutantStack<int> ms2(ms);
    	std::cout << "Using copy constructor: ";
    	while (!ms2.empty())
    	{
    	    std::cout << ms2.top() << " ";
    	    ms2.pop();
    	}
    	std::cout << std::endl;
	
    	// Test operator=
    	MutantStack<int> ms3;
    	ms3 = ms;
    	std::cout << "Using operator=: ";
    	while (!ms3.empty())
    	{
    	    std::cout << ms3.top() << " ";
    	    ms3.pop();
    	}
    	std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	// subjectTest();
	myTest();
    return 0;
}