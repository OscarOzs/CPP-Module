/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:02:38 by oozsertt          #+#    #+#             */
/*   Updated: 2023/04/04 17:23:42 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# define ICI printf("ICI\n");

# include <iostream>
# include <fstream>
# include <sstream>
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
		void	main_algo(char *input) throw();
		bool	input_valid(std::string &input) const throw();
		bool	date_valid(std::string &line) const throw();
		int		check_value(std::string &line) const throw();
		bool	date_in_range(std::string &line) const throw();
		std::string	calculate(std::string &line, std::string &res) throw();

	private:
		BitcoinExchange();
		
		std::map<std::string, float> _data;
		std::string const _database;

};

#endif