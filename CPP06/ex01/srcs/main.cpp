/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:44:21 by oozsertt          #+#    #+#             */
/*   Updated: 2022/11/02 15:20:04 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "data.hpp"

int main(void)
{
	Data	player;
	Data*	res;
	uintptr_t	raw;

	player.level = 42;
	player.name = "Rick";

	std::cout << "Adress : " << &player << std::endl;
	std::cout << "Name : " << player.name << std::endl;
	std::cout << "Level : " << player.level << std::endl;
	std::cout << std::endl;
	
	raw = serialize(&player);

	std::cout << "Adress : " << &player << std::endl;
	std::cout << "Name : " << player.name << std::endl;
	std::cout << "Level : " << player.level << std::endl;
	std::cout << std::endl;
	
	res = deserialize(raw);
	
	std::cout << "Name : " << res->name << std::endl;
	std::cout << "Level : " << res->level << std::endl;
	return (0);
}