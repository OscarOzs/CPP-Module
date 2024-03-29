/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:11:47 by oozsertt          #+#    #+#             */
/*   Updated: 2023/02/01 18:05:36 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	std::cout << "Basic test :" << std::endl;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " : ";
	dog->makeSound();
	std::cout << cat->getType() << " : ";
	cat->makeSound();
	

	std::cout << std::endl << "Array of 5 dogs :" << std::endl;
	Animal* animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	std::cout << std::endl << "Array of 5 cats :" << std::endl;
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();

	std::cout << std::endl << "Check if array of animals is correctly filled" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << i << " : " << animals[i]->getType() << std::endl;

	// Set ideas to each animals
	std::cout << std::endl;
	Brain* brain = new Brain();
	brain->ideas[0] = "I would like to go for a walk !";
	brain->ideas[1] = "I would like to eat some fish !";
	for (int i = 0; i < 5; i++)
		animals[i]->setBrain(brain->ideas[0]);
	for (int i = 5; i < 10; i++)
		animals[i]->setBrain(brain->ideas[1]);

	std::cout << std::endl << "Check if ideas are correctly filled in animals brain" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << animals[i]->getType() << " " << i << " : " << animals[i]->getBrain() << std::endl;

	std::cout << std::endl << "Check if copy constructor works correctly" << std::endl;
	Dog dogsrc;
	dogsrc.setBrain("Coucou");
	Dog* dogcpy = new Dog(dogsrc);
	std::cout << dogcpy->getType() << " is thinking : " << dogcpy->getBrain() << ", so he bark : ";
	dogcpy->makeSound();
	
	std::cout << std::endl << "DESTRUCTOR :" << std::endl;
	delete dog;
	delete cat;
	for (int i = 0; i < 10; i++)
		delete animals[i];
	delete brain;
	delete dogcpy;

	std::cout << std::endl << "STACK DESTRUCTOR : " << std::endl;
	return (0);
}