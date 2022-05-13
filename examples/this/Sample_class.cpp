#include <iostream>
#include "Sample_class.hpp"

Sample::Sample(void)
{
	std::cout << "Contructor Called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo = " << this->foo << std::endl;

	this->bar();

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return;
}