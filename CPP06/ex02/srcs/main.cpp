/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:06:17 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/06 13:28:12 by oozsertt         ###   ########.fr       */
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
	std::cout << "Identifier using pointer" << std::endl;
	ptr_identifier();
	std::cout << std::endl;
	std::cout << "Identifier using reference" << std::endl;
	ref_identifier();
	return 0;
}