/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:37:33 by oozsertt          #+#    #+#             */
/*   Updated: 2023/03/15 16:00:10 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>

template<typename T>
class MutantStack : public std::stack <T>
{

	public:
		MutantStack();
		MutantStack( MutantStack const & src );
		virtual ~MutantStack();

		typedef typename std::stack<T>::container_type container_type;
		typedef typename container_type::iterator iterator;

		iterator	begin(void);
		iterator	end(void);

		MutantStack &		operator=( MutantStack const & rhs );

	private:
	/* data */
};

# include "MutantStack.tpp"

#endif /* ***************************************************** MUTANTSTACK_H */