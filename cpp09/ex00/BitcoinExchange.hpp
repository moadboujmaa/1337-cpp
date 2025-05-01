/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:32:05 by mboujama          #+#    #+#             */
/*   Updated: 2025/05/01 14:16:36 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <map>
# include <fstream>
# include <string>

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"

class BitcoinExchange
{
	private:
		std::string filename;
		std::map<std::string, double> db;
		bool dateValidator(const std::string &date);
		void splitAndSave(std::string str);
		void getDateAndRate(std::string line, std::string &date, std::string &rate, bool &ok);

	public:
		std::string trim(std::string str);
		void printDB(); //! delete later
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& obj);
		BitcoinExchange&	operator=(const BitcoinExchange& obj);
		~BitcoinExchange();

		void fillDB();
		void processFile(std::string &filename);
		
};

#endif
