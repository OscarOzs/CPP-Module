/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 07:48:12 by oozsertt          #+#    #+#             */
/*   Updated: 2023/03/14 16:48:27 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(void) : _size(0), _numberAdded(0)
{
	return ;
}

Span::Span(unsigned int N) : _size(N), _numberAdded(0)
{
	if (this->_size != 0)
	{
		this->_tab = new int[this->_size]();
		for (unsigned int i = 0; i < this->_size; i++)
			this->_tab[i] = 0;
	}
	else
		this->_tab = NULL;
	return ;
}

Span::Span( const Span & src )
{
	this->_size = src._size;
	if (this->_size != 0)
		this->_tab = new int[this->_size]();
	else
		this->_tab = NULL;
	for (unsigned int i = 0; i < this->_size; i++)
		this->_tab[i] = src._tab[i];
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	if (this->_tab)
		delete [] this->_tab;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_size = rhs._size;
		this->_numberAdded = rhs._numberAdded;
		if (this->_tab)
			delete [] this->_tab;
		if (this->_size != 0)
		{
			this->_tab = new int[this->_size]();
			for (unsigned int i = 0; i < this->_size; i++)
				this->_tab[i] = rhs._tab[i];
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & src )
{
	o << "Size = " << src.getSize() << std::endl;
	o << "Number added = " << src.getNumberAdded() << std::endl;
	o << "Content : ";
	for (unsigned int i = 0; i < src.getNumberAdded(); i++)
		o << src.getTabValue(i) << " ";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Span::addNumber(int number) throw(SpanFullException)
{
	if (this->_size > this->_numberAdded)
	{
		this->_tab[this->_numberAdded] = number;
		this->_numberAdded++;
	}
	else
		throw (Span::SpanFullException());
	return ;
}

int				Span::shortestSpan() const throw(SpanTooSmall)
{
	int	smallestDiff = INT_MAX;

	if (this->_numberAdded > 1)
	{
		for (unsigned int i = 0; i < this->_numberAdded; i++)
		{
			for (unsigned int j = i + 1; j < this->_numberAdded; j++)
			{
				int diff = std::abs(this->_tab[i] - this->_tab[j]);
				if (diff < smallestDiff)
					smallestDiff = diff;
			}
		}
	}
	else
		throw(Span::SpanTooSmall());
	return (smallestDiff);
}

int				Span::longestSpan() const throw(SpanTooSmall)
{
	int	longestDiff = 0;

	if (this->_numberAdded > 1)
	{
		for (unsigned int i = 0; i < this->_numberAdded; i++)
		{
			for (unsigned int j = i + 1; j < this->_numberAdded; j++)
			{
				int diff = std::abs(this->_tab[i] - this->_tab[j]);
				if (diff > longestDiff)
					longestDiff = diff;
			}
		}
	}
	else
		throw(Span::SpanTooSmall());
	return (longestDiff);
}

void			Span::addNumber(std::vector<int>::const_iterator begin,
std::vector<int>::const_iterator end) throw(SpanFullException)
{
	while (begin < end)
	{
		this->_tab[this->_numberAdded] = *begin;
		begin++;
		this->_numberAdded++;
		if (this->_numberAdded > this->_size)
			throw (Span::SpanFullException());
	}
	return ;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int	Span::getSize() const throw()
{
	return (this->_size);
}

unsigned int	Span::getNumberAdded() const throw()
{
	return (this->_numberAdded);
}

int				Span::getTabValue(unsigned int i) const throw()
{
	if (i <= this->_numberAdded)
		return (this->_tab[i]);
	else
		return (0);
}


/* ************************************************************************** */