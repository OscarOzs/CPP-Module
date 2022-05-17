/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 02:27:58 by oozsertt          #+#    #+#             */
/*   Updated: 2022/05/17 20:28:52 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac >= 2)
	{
		i = 0;
		while (av[i])
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				if (isupper(av[i][j]) == 0)
					std::cout << toupper(av[i][j]);
				else
					std::cout << av[i][j];
				j++;
			}
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}