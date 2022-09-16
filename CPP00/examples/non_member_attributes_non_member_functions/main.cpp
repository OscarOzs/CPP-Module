# include "Sample.class.hpp"
# include <iostream>

void	f0(void)
{
	Sample instance;

	std::cout << "nbr of instances : " << Sample::getNbInst() << std::endl;

	return;
}

void	f1(void)
{
	Sample instance;

	std::cout << "nbr of instances : " << Sample::getNbInst() << std::endl;
	f0();
	std::cout << "nbr of instances : " << Sample::getNbInst() << std::endl;
	return;
}

int main(void)
{
	std::cout << "nbr of instances : " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "nbr of instances : " << Sample::getNbInst() << std::endl;

	return (0);
}