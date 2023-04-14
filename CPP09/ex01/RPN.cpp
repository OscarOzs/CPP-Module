/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:19:42 by oozsertt          #+#    #+#             */
/*   Updated: 2023/04/12 20:33:56 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

static bool	isoperator(char c)
{
	if (c == '*' || c == '/' || c == '-'
		|| c == '+')
		return (1);
	else
		return (0);
}

static bool	is_input_valid(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]) && !isoperator(str[i])
			&& str[i] != ' ')
			return (false);
	}
	return (true);
}

void	rpn_calculate(char *av)
{
	if (is_input_valid(av) == false)
	{
		std::cout << "Input is invalid" << std::endl;
		return ;
	}
	else
	{
		
	}
}
