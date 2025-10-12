/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:32:08 by mboujama          #+#    #+#             */
/*   Updated: 2025/10/11 17:28:52 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"
# include <climits>
# include <cstddef>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <exception>
# include <fstream>
# include <map>
# include <sstream>
# include <stdexcept>
# include <string>
# include <limits>
# include <string>

BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::~BitcoinExchange(void)
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
{
	*this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
	if (this != &obj)
	{
		this->db = obj.db;
		this->filename = obj.filename;
	}
	return (*this);
}

void BitcoinExchange::splitAndSave(std::string str) {
	std::istringstream ss(str);
	std::string strs[2];
	std::string val;

	for (int i = 0; i < 2; i++) {
		getline(ss, val, ',');
		strs[i] = val;
	}
	db[strs[0]] = std::atof(strs[1].c_str());
}

std::string BitcoinExchange::trim(std::string str) {
	const std::string whitespace = " \t\n\r\f\v";
    size_t start = str.find_first_not_of(whitespace);
    if (start == std::string::npos)
        return "";
    size_t end = str.find_last_not_of(whitespace);
    return str.substr(start, end - start + 1);
}

void BitcoinExchange::fillDB() {
	std::ifstream file("data.csv");
	
	if (!file.is_open())
		throw std::runtime_error("could not open database file.");
	
	std::string line;
	bool hasData = false;

	while (std::getline(file, line)) {
		if (!line.compare("date,exchange_rate"))
			continue ;
		splitAndSave(line);
		hasData = true;
	}
	
	if (!hasData)
		throw std::runtime_error("database file is empty.");
}

float BitcoinExchange::getNearestRate(std::string date) {
	std::map<std::string, float>::iterator it = db.lower_bound(date);
	
	if (it == db.begin())
		return it->second;
	if (it == db.end() || it->first != date)
		--it;
	return it->second;
}

bool BitcoinExchange::dateValidator(const std::string &date) {
	std::istringstream ss(date);
	std::string strs[3];
	std::string val;
	std::string year, month, day;
	
	if (date.length() != 10 || date.at(4) != '-' || date.at(7) != '-')
		return false;

	for (int i = 0; i < 3; i++) {
		std::getline(ss, val, '-');
		strs[i] = val;
	}
	year = strs[0];
	month = strs[1];
	day = strs[2];

	int y = atoi(year.c_str());
	int m = atoi(month.c_str());
	int d = atoi(day.c_str());

	if (m < 1 || m > 12 || d < 1)
		return false;

	int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	if (m == 2 && ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)))
		months[1] = 29;
	
	if (d > months[m - 1])
		return false;
	return true;
}

void BitcoinExchange::getDateAndRate(std::string line, std::string &date, std::string &rate, bool &ok) {
	size_t pipePos = line.find('|');
	
	ok = false;
	try {
		if (pipePos == std::string::npos)
			throw std::runtime_error("bad input => " + line);
		
		date = trim(line.substr(0, pipePos));
		rate = trim(line.substr(pipePos + 1));
		
		if (date.empty() || rate.empty())
			throw std::runtime_error("bad input => " + line);

		if (!dateValidator(date))
			throw std::runtime_error("bad input => " + date);
		
		char *endptr;
		double rateValue = strtod(rate.c_str(), &endptr);
		
		while (*endptr == ' ' || *endptr == '\t')
			endptr++;
		if (*endptr != '\0')
			throw std::runtime_error("bad input => " + rate);
		
		if (rateValue < 0)
			throw std::runtime_error("not a positive number.");
		if (rateValue > 1000)
			throw std::runtime_error("too large number.");
		
		ok = true;
	} catch (const std::exception &e) {
		std::cout << RED << "Error: " << e.what() << RESET << std::endl;
	}
}

void BitcoinExchange::processFile(std::string &filename) {
	std::ifstream file(filename.c_str());
	std::string date, rate;
	bool first = true, ok;

	if (!file.is_open())
		throw std::runtime_error("could not open file.");

	std::string line;

	while (std::getline(file, line)) {
		ok = true;
		if (first && line.empty())
			throw std::runtime_error("file is empty.");
		if (!line.compare("date | value")) {
			first = false;
			continue ;
		}
		getDateAndRate(line, date, rate, ok);
		first = false;

		if (ok) {
			std::map<std::string, float>::iterator it = db.find(date);
			float exchangeRate;
			
			if (it != db.end())
				exchangeRate = it->second;
			else
				exchangeRate = getNearestRate(date);
			
			std::cout << GREEN << date << " => " << rate << " = " << atof(rate.c_str()) * exchangeRate << RESET << std::endl;
		}
	}
	if (first)
		throw std::runtime_error("file is empty.");
}
