/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:37:49 by oozsertt          #+#    #+#             */
/*   Updated: 2023/03/15 15:30:42 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template<typename T>
MutantStack<T>::MutantStack()
{
	return ;
}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack & src ) : std::stack<T>(src)
{
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template<typename T>
MutantStack<T>::~MutantStack()
{
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template<typename T>
MutantStack<T> &				MutantStack<T>::operator=( MutantStack const & rhs )
{
	if ( this != &rhs )
	{
		this->c = rhs.c;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}

/* ************************************************************************** */