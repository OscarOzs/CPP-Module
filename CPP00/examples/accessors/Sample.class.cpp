# include <iostream>
# include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor Called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int		Sample::getFoo(void) const
{
	return (this->_Foo);
}

void	Sample::setFoo(int v)
{
	if (v >= 0)
		this->_Foo = v;

	return;
}