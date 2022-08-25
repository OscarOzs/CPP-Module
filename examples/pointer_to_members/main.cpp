# include <iostream>
# include "Sample.class.hpp"

int main(void)
{
	Sample	instance;
	Sample	*instancep = &instance; // la valeur de instancep = l'adresse de instance

	int	Sample::*p = NULL; // initialisation a NULL d'un pointeur sur entier faisant partit de la classe Sample
	void	(Sample::*f)(void) const; // declaration d'un pointeur sur fonction const f de la classe Sample

	p = &Sample::Foo; // l'adresse de p = l'adresse de l'entier Foo de la classe Sample

	std::cout << "Value of member foo: " << instance.Foo << std::endl;
	instance.*p = 21; // la valeur de p de l'instance instance = 21
	std::cout << "Value of member foo: " << instance.Foo << std::endl;
	instancep->*p = 42; // la valeur de p du pointeur instancep = 42
	std::cout << "Value of member foo: " << instance.Foo << std::endl;

	f = &Sample::bar; // l'adresse de f = l'adresse de la fonction bar de la classe Sample

	(instance.*f)(); // la valeur de f = la fonction (bar) de l'instance instance
	(instancep->*f)(); // la valeur de f = la fonction (bar) du pointeur sur instance instancep

	return (0);
}