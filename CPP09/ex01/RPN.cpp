/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:19:42 by oozsertt          #+#    #+#             */
/*   Updated: 2023/05/17 14:59:19 by oozsertt         ###   ########.fr       */
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

static bool	has_invalid_division(std::string str)
{
	int	nbr;

	nbr = 1;
	for (size_t i = 0; i < str.length(); i += 2)
	{
		if (isdigit(str[i]))
		{
			if (atoi(&str[i]) == 0)
				nbr = 0;
			else
				nbr = 1;
		}
		if (str[i] == '/' && nbr == 0)
			return (true);
	}
	return (false);
}

static bool	is_input_valid(char *input)
{
	std::string			str;
	std::istringstream	stream(input);
	std::string			element;
	int					element_count = 0;
	int					space_count = 0;

	str.assign(input);
	for (int i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]) && !isoperator(str[i])
			&& str[i] != ' ')
			return (false);
	}
	if (str[0] == ' ')
		return (false);
	else if ((str[str.length() - 1]) == ' ')
		return (false);
	while (getline(stream, element, ' '))
	{
		if (isdigit(element[0]) || isoperator(element[0]))
			element_count++;
	}
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			space_count++;
	}
	if (space_count == 0)
		return (false);
	else if (space_count >= element_count)
		return (false);
	else if (has_invalid_division(str) == true)
		return (false);
	return (true);
}

static void	fill_stack_with_op_res(std::stack<int> &stack, char op)
{
	int nbr1;
	int	nbr2;

	nbr1 = stack.top();
	stack.pop();
	nbr2 = stack.top();
	stack.pop();
	if (op == '*')
		stack.push(nbr2 * nbr1);
	else if (op == '/')
		stack.push(nbr2 / nbr1);
	else if (op == '-')
		stack.push(nbr2 - nbr1);
	else
		stack.push(nbr2 + nbr1);
	return ;
}

void	rpn_calculate(char *av)
{
	std::istringstream stream(av);
	std::string str;
	std::stack<int> stack;

	if (is_input_valid(av) == false)
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	else
	{
		while (getline(stream, str, ' '))
		{
			if (isdigit(str[0]) || atoi(str.c_str()) < 0)
				stack.push(atoi(str.c_str()));
			else if (isoperator(str[0]))
			{
				if (stack.size() < 2)
				{
					std::cout << "Error" << std::endl;
					return ;
				}
				else
					fill_stack_with_op_res(stack, str[0]);
			}
		}
	}
	if (stack.size() == 1)
		std::cout << stack.top() << std::endl;
	else
		std::cout << "Error" << std::endl;
	return ;
}
