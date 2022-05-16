#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class	Sample
{
public :

	int	publicFoo;

	Sample(void);
	~Sample(void);

	void	publicBar(void) const;

private:

	int	_privateFoo;

	void	_privateBar(void) const;
}; // l'interet de fonction, variables "private" est de pouvoir les utiliser seulement dans cette classe.
// coupler a une fonction avec initialization list, elle protege la valeur des privates. (if valeur < 0 ), if (valeur > 1000)

#endif