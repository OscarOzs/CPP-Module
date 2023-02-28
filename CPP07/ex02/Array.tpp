/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 01:43:36 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/28 03:56:36 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _tab(NULL), _size(0)
{
	return ;	
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_tab = new T[n]();
	for (unsigned int i = 0; i < _size; i++)
		this->_tab[i] = 0;
	return ;
}

template<typename T>
Array<T>::Array(Array const & src)
{
	this->_size = src._size;
	this->_tab = new T[this->_size]();
	for (unsigned int i = 0; i < this->_size; i++)
		this->_tab[i] = src._tab[i];
	return ;
}

template<typename T>
Array<T> &Array<T>::operator=(Array const & rhs)
{
	if (this == &rhs)
		return (*this);
	if (this->_tab)
		delete [] this->_tab;
	this->_size = rhs._size;
	this->_tab = new T[this->_size]();
	for (unsigned int i = 0; i < this->_size; i++)
		this->_tab[i] = rhs._tab[i];
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	if (this->_tab)
		delete [] this->_tab;
}

template<typename T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw (Array::IndexTooHighException());
	return (this->_tab[i]);
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}

