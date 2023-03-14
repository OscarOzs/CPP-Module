/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 07:24:20 by oozsertt          #+#    #+#             */
/*   Updated: 2023/03/14 17:05:44 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

void	fillSpan()
{
	Span a(5);

	try
	{
		a.addNumber(6);
		a.addNumber(3);
		a.addNumber(17);
		a.addNumber(9);
		a.addNumber(11);
		std::cout << a << std::endl;
	}	
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	fillSpanError()
{
	Span a(4);

	try
	{
		a.addNumber(6);
		a.addNumber(3);
		a.addNumber(17);
		a.addNumber(9);
		a.addNumber(11);
		std::cout << a << std::endl;
	}	
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	shortestSpan()
{
	Span a(5);

	try
	{
		a.addNumber(6);
		a.addNumber(3);
		a.addNumber(17);
		a.addNumber(9);
		a.addNumber(11);
		std::cout << a << std::endl;
		std::cout << a.shortestSpan() << std::endl;
	}	
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	shortestSpanError()
{
	Span a(5);

	try
	{
		a.addNumber(6);
		std::cout << a << std::endl;
		std::cout << a.shortestSpan() << std::endl;
	}	
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	longestSpan()
{
	Span a(5);

	try
	{
		a.addNumber(6);
		a.addNumber(3);
		a.addNumber(-17);
		a.addNumber(9);
		a.addNumber(11);
		std::cout << a << std::endl;
		std::cout << a.longestSpan() << std::endl;
	}	
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	longestSpanError()
{
	Span a(10);

	try
	{
		a.addNumber(42);
		std::cout << a << std::endl;
		std::cout << a.longestSpan() << std::endl;
	}	
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	addNumber()
{
	std::vector<int> vec;
	for (int i = 0; i < 10000; i++)
	{
		vec.push_back(i);
	}
	Span a(10000);

	try
	{
		a.addNumber(vec.begin(), vec.end());
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	addNumberError()
{
	std::vector<int> vec;
	for (int i = 0; i < 50; i++)
	{
		vec.push_back(i);
	}
	Span a(49);

	try
	{
		a.addNumber(vec.begin(), vec.end());
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	fillSpan();
	// fillSpanError();
	// shortestSpan();
	// shortestSpanError();
	// longestSpan();
	// longestSpanError();
	// addNumber();
	// addNumberError();
}