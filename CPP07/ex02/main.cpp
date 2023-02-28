/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 01:43:38 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/28 04:37:16 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

void	emptyConstructor()
{
	Array<int> a;
	
	std::cout << a.size() << std::endl;
	try
	{
		std::cout << a[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
}

void	intConstructor()
{
	Array<float> a(10);

	std::cout << "size : " << a.size() << std::endl;
	try
	{
		std::cout << "10th T element : " << a[9] << std::endl;
		std::cout << a[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void	cpyConstructor()
{
	Array<char> a(42);
	Array<char> c(a);


	std::cout << "a size : " << a.size() << std::endl;
	std::cout << "c size : " << c.size() << std::endl << std::endl;
	
	Array<char> b(10);
	a = b;
	std::cout << "b size : " << b.size() << std::endl;
	std::cout << "a size : " << a.size() << std::endl;
	std::cout << "c size : " << c.size() << std::endl << std::endl;
	
	try
	{
		std::cout << "42th T element : " << (int)c[41] << std::endl;
		std::cout << c[42] << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	assignConstructor()
{
	Array<double> a(42);
	Array<double> c;
	std::cout << "c size : " << c.size() << std::endl << std::endl;
	c = a;

	std::cout << "a size : " << a.size() << std::endl;
	std::cout << "c size : " << c.size() << std::endl << std::endl;
	
	Array<double> b(10);
	c = b;
	std::cout << "b size : " << b.size() << std::endl;
	std::cout << "a size : " << a.size() << std::endl;
	std::cout << "c size : " << c.size() << std::endl << std::endl;

	try
	{
		std::cout << "10th T element : " << c[9] << std::endl;
		std::cout << c[10] << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	emptyConstructor();
	// intConstructor();
	// cpyConstructor();
	// assignConstructor();

}