/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:37:30 by oozsertt          #+#    #+#             */
/*   Updated: 2022/05/17 15:42:06 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sample.class.hpp"
# include <iostream>

void	f0(void)
{
	Sample instance;

	std::cout << "nbr of instances : " << Sample::getNbInst() << std::endl;

	return;
}

void	f1(void)
{
	Sample instance;

	std::cout << "nbr of instances : " << Sample::getNbInst() << std::endl;
	f0();
	std::cout << "nbr of instances : " << Sample::getNbInst() << std::endl;
	return;
}

int main(void)
{
	std::cout << "nbr of instances : " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "nbr of instances : " << Sample::getNbInst() << std::endl;

	return (0);
}