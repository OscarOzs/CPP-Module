#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample
{
public:

	float const pi; // const permet de proteger la variable "pi" d'un changement de valeur potentiel
	int			qd;

	Sample(float const f);
	~Sample(void);

	void	bar(void) const; // const indique ici au compilateur que la fonction "bar" ne pourra
	// jamais changer la valeur des instances courantes
};
// si je veux ecrire une fonction membre qui ne modifie pas les instances courantes,
// je DOIS la declarer en const.
#endif