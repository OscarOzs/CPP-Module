# include "Sample_class.hpp"
# include <iostream>

int main(void)
{
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
	// intance._privateFoo = 42; Impossible d'utiliser la variable _privateFoo en dehors de la classe
	// std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl; idem
	// instance._privateBar(); impossible d'appeler la fonction _privateBar en dehors de la classe

	instance.publicBar();

	return (0);
}