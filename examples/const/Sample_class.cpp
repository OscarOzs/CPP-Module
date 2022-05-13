# include <iostream>
# include "Sample_class.hpp"

Sample::Sample(float const f) : pi(f), qd(42)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar(void) const // voir .hpp pour comprendre "const"
{
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	return;
}