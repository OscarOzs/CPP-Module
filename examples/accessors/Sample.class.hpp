/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:14:20 by oozsertt          #+#    #+#             */
/*   Updated: 2022/05/16 18:28:47 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:

	Sample(void);
	~Sample(void);

	int		getFoo(void) const; // ici le const est important pour garder les valeurs dans private en READ-ONLY
	void	setFoo(int v);

private:

	int	_Foo;
}; // les setter et les getter (setFoo, getFoo) sont des fonctions qui font la liaison entre
// le public et le private tout en controlant le(s) parametre(s) recu. (voir .cpp)

#endif