/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeCheck.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:37:11 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/03 09:36:19 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeCheck.hpp"

TypeCheck::TypeCheck(void)
{
	std::cout << "TypeCheck Default constructor called" << std::endl;
}

TypeCheck::~TypeCheck(void)
{
	std::cout << "TypeCheck Destructor called" << std::endl;
}

TypeCheck::TypeCheck(const TypeCheck& obj)
{
	std::cout << "TypeCheck Copy constructor called" << std::endl;
	*this = obj;
}

TypeCheck& TypeCheck::operator=(const TypeCheck& obj)
{
	std::cout << "TypeCheck Copy assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

bool TypeCheck::isChar(std::string ele) {
	return ele.length() == 1 && (ele[0] >= 32 || ele[0] <= 126);
}

bool TypeCheck::isInt(std::string ele) {
	int i = 0;
	
	if (ele[i] == '-' || ele[i] == '+')
		i++;
	while (ele[i]) {
		if (!std::isdigit(ele[i]))
			return false;
		i++;
	}
	return true;
}

bool TypeCheck::isFloat(std::string ele) {
	size_t i = 0;
	bool periodFound = false;

	if (ele.at(ele.length() - 1) != 'f' || ele.at(0) == '.' || ele.at(ele.length() - 2) == '.')
		return false;
	if (ele.at(i) == '-' || ele.at(i) == '+')
		i++;
	while (i < ele.length() - 1) {
		if (!periodFound && ele.at(i) == '.') {
			periodFound = true;
			i++;
			continue ;
		}
		else if (periodFound && ele.at(i) == '.')
			return false;
		if (!std::isdigit(ele.at(i)))
			return false;
		i++;
	}
	return periodFound;
}

bool TypeCheck::isDouble(std::string ele) {
	size_t i = 0;
	bool periodFound = false;

	if (ele.at(i) == '.' || ele.at(ele.length() - 1) == '.')
		return false;
	if (ele.at(i) == '-' || ele.at(i) == '+')
		i++;
	while (i < ele.length()) {
		if (!periodFound && ele.at(i) == '.') {
			periodFound = true;
			i++;
			continue ;
		}
		else if (periodFound && ele.at(i) == '.')
			return false;
		if (!std::isdigit(ele.at(i)))
			return false;
		i++;
	}
	return periodFound;
}

bool TypeCheck::isPlusInf(std::string ele) {
	if (ele == "+inff" || ele == "+inf")
		return true;
	return false;
}

bool TypeCheck::isMinusInf(std::string ele) {
	if (ele == "-inff" || ele == "-inf")
		return true;
	return false;
}

bool TypeCheck::isNan(std::string ele) {
	if (ele == "nan" || ele == "nanf")
		return true;
	return false;
}
