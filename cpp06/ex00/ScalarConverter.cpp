/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:53:02 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/27 11:08:42 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter Default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
	std::cout << "ScalarConverter Copy constructor called" << std::endl;
	*this = obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj)
{
	std::cout << "ScalarConverter Copy assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

Types ScalarConverter::getType(const std::string &str) {
	if (TypeCheck::isInt(str))
		return INT;
	else if (TypeCheck::isChar(str))
		return CHAR;
	else if (TypeCheck::isDouble(str))
		return DOUBLE;
	else if (TypeCheck::isFloat(str))
		return FLOAT;
	else if (TypeCheck::isInf(str))
		return INF;
	else if (TypeCheck::isInff(str))
		return INFF;
	else
		return INVALID;
}

void ScalarConverter::convert(const std::string &str) {
	Types type = getType(str);

	if (type == INVALID)
		std::cout << "Invalid" << std::endl;
	else if (type == INT)
		std::cout << "Integer: " << Convert::toInt(str) << std::endl;
	else if (type == FLOAT)
		std::cout << "Float: " << std::setprecision(12) << Convert::toFloat(str) << "f" << std::endl;
	else if (type == DOUBLE)
		std::cout << "Double: " << std::setprecision(12) << Convert::toDouble(str) << std::endl;
	else if (type == CHAR)
		std::cout << "Character: " << Convert::toChar(str) << std::endl;
	else if (type == INF)
		std::cout << "Infinite" << std::endl;
	else if (type == INFF)
		std::cout << "Infinite Float" << std::endl;
}
