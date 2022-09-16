# include <iostream>
# include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst++;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst--;

	return;
}

int		Sample::getNbInst(void) // impossible d'utiliser "this" dans une fonction non membre
{
	return (Sample::_nbInst);
}

int	Sample::_nbInst = 0; // << la seule facon d'initialiser un attribut non membre