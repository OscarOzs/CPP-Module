/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:02:38 by oozsertt          #+#    #+#             */
/*   Updated: 2023/03/28 18:37:25 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <map>
# include <cstdlib>

class BitcoinExchange
{

	public:

		BitcoinExchange(char *input);
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange();

		BitcoinExchange &		operator=( BitcoinExchange const & rhs );

		void	check_file(char *input) const throw(std::invalid_argument);
		void	store_database() throw ();

	private:
		BitcoinExchange();
		
		std::map<std::string, float> _data;
		std::string const _database;

};

#endif