/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:32:08 by mboujama          #+#    #+#             */
/*   Updated: 2025/05/01 20:43:11 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <climits>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <exception>
#include <fstream>
#include <map>
#include <sstream>
#include <stdexcept>
#include <string>
#include <limits>
#include <string>

BitcoinExchange::BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Default constructor called" << std::endl;
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Destructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
{
	std::cout << "BitcoinExchange Copy constructor called" << std::endl;
	*this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
	std::cout << "BitcoinExchange Copy assignment operator called" << std::endl;
	if (this != &obj)
	{}
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
    size_t end = str.find_last_not_of(whitespace);
    return str.substr(start, end - start + 1);
}

void BitcoinExchange::fillDB() {
	std::ifstream file("data.csv");
	std::string line;

	while (std::getline(file, line)) {
		if (!line.compare("date,exchange_rate"))
			continue ;
		splitAndSave(line);
	}
}

float BitcoinExchange::getNearestRate(std::string date) {
	std::map<std::string, float>::reverse_iterator it;

	for (it = db.rbegin(); it != db.rend(); it++) {
		if (strcmp(it->first.c_str(), date.c_str()) < 0)
			return it->second;
	}
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

	int months[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (atoi(month.c_str()) > 12 || atoi(day.c_str()) > months[atoi(month.c_str() - 1)])
		return false;
	return true;
}

void BitcoinExchange::getDateAndRate(std::string line, std::string &date, std::string &rate, bool &ok) {
	std::istringstream ss(line);
	std::string strs[2];
	std::string val;
	
	int i = 0;
	try {
		while (getline(ss, val, '|')) 
			strs[i++] = val;
		
		if (i != 2)
			throw std::runtime_error("Error: bad input => " + line);

		date = trim(strs[0]);
		rate = trim(strs[1]);

		ok = dateValidator(date);
		if (!ok)
			throw std::runtime_error("invalid date.");
		if (atol(rate.c_str()) > INT_MAX) {
			ok = false;
			throw std::runtime_error("too large number.");
		}
		if (atoi(rate.c_str()) < 0) {
			ok = false;
			throw std::runtime_error("not a positive number.");
		}
	} catch (const std::exception &e) {
		std::cout << RED << "Error: " << e.what() << RESET << std::endl;
	}
}

void BitcoinExchange::processFile(std::string &filename) {
	std::ifstream file(filename.c_str());
	std::string date, rate;
	bool first = true, ok;

	if (!file.is_open())
		throw std::runtime_error("file doesn't exist");

	std::string line;

	while (std::getline(file, line)) {
		ok = true;
		if (first && line.empty())
			throw std::runtime_error("file is empty.");
		if (!line.compare("date | value"))
			continue ;
		getDateAndRate(line, date, rate, ok);
		first = false;

		if (!db[date])
			db[date] = getNearestRate(date);
		if (ok)
			std::cout << GREEN << date << " => " << rate << " = " << atof(rate.c_str()) * db[date] << RESET << std::endl;
	}
	if (first)
		throw std::runtime_error("file is empty.");
}

//! Delete later
void BitcoinExchange::printDB() {
	std::map<std::string, float>::iterator it;

	for (it = db.begin(); it != db.end(); it++)
		std::cout << it->first << " => " << it->second  << std::endl;
}