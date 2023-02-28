/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 07:48:18 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/28 07:50:54 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>

class Span
{

	public:

		Span();
		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */