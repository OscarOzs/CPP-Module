/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:06:17 by oozsertt          #+#    #+#             */
/*   Updated: 2022/11/02 21:22:45 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "typeidentifier.hpp"

void	ptr_identifier()
{
	Base* random;

	random = generate();
	identify(*random);
}

void	ref_identifier()
{
	Base* random;

	random = generate();
	identify(random);
}

int main(void)
{
	ptr_identifier();
	std::cout << std::endl;
	ref_identifier();
	return 0;
}