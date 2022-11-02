/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typeidentifier.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:08:03 by oozsertt          #+#    #+#             */
/*   Updated: 2022/11/02 18:09:38 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEIDENTIFIER_HPP
# define TYPEIDENTIFIER_HPP

# include <iostream>
# include <string.h>
# include <ctime>
# include <cstdlib>

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

void	identify(Base* p);
void	identify(Base& p);
Base*	generate(void);

#endif