/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1_struct.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:44:03 by oozsertt          #+#    #+#             */
/*   Updated: 2022/05/16 17:45:05 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_STRUCT_H
# define SAMPLE1_STRUCT_H

struct Sample1
{
	int foo;

	Sample1(void);
	~Sample1(void);

	void	Bar(void) const;	
};

#endif