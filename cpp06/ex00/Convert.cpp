/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:43:34 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/27 11:05:06 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
	std::cout << "Convert Default constructor called" << std::endl;
}

Convert::~Convert(void)
{
	std::cout << "Convert Destructor called" << std::endl;
}

Convert::Convert(const Convert& obj)
{
	std::cout << "Convert Copy constructor called" << std::endl;
	*this = obj;
}

Convert& Convert::operator=(const Convert& obj)
{
	std::cout << "Convert Copy assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

int Convert::toInt(const std::string &str) {
	std::istringstream iss(str);
	int res;
	iss >> res;
	return res;
}

double Convert::toDouble(const std::string &str) {
	return std::strtod(str.c_str(), NULL);
}

char Convert::toChar(const std::string &str) {
	return (str[0]);
}

float Convert::toFloat(const std::string &str) {
	std::istringstream iss(str);
	float res;
	iss >> res;
	return res;
}

