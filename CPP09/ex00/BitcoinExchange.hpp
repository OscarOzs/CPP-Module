/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:02:38 by oozsertt          #+#    #+#             */
/*   Updated: 2023/05/17 14:27:48 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

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
		void	calculate_and_print(std::string line) throw();

		std::map<std::string, float>	getData() const throw();

	private:
		BitcoinExchange();
		
		std::map<std::string, float>	_data;
		std::string const				_database;
		bool							_hasDatabase;

};

#endif