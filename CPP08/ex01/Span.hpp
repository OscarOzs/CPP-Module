/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 07:48:18 by oozsertt          #+#    #+#             */
/*   Updated: 2023/03/14 16:48:32 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <string>
# include <climits>
# include <vector>

class Span
{

	public:

		class SpanFullException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Span is full, cannot add more number");
				}	
		};

		class SpanTooSmall : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Span is too small");
				}
		};

		Span(unsigned int N);
		Span( Span const & src );
		~Span();
		
		unsigned int	getSize() const throw();
		unsigned int	getNumberAdded() const throw();
		int				getTabValue(unsigned int i) const throw();

		void			addNumber(int number) throw(SpanFullException);
		int				shortestSpan() const throw(SpanTooSmall);
		int				longestSpan() const throw(SpanTooSmall);
		void			addNumber(std::vector<int>::const_iterator begin,
std::vector<int>::const_iterator end) throw(SpanFullException);

		Span &		operator=( Span const & rhs );

	private:
		Span();

		int*			_tab;
		unsigned int	_size;
		unsigned int	_numberAdded;
		

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */