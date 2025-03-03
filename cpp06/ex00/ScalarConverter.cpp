/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:53:02 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/03 10:18:08 by mboujama         ###   ########.fr       */
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
	else if (TypeCheck::isPlusInf(str))
		return PLUS_INF;
	else if (TypeCheck::isMinusInf(str))
		return MINUS_INF;
	else if (TypeCheck::isNan(str))
		return NAN;
	else
		return INVALID;
}

int ScalarConverter::getPresicion(const std::string &str) {
	size_t i = 0, len = 0;

	for (; str.at(i) != '.'; i++) {}
	i++;
	for (; i < str.length() && str.at(i) != 'f'; i++, len++) {}
	return len;
}

void ScalarConverter::convert(const std::string &str) {
	Types type = getType(str);
	char	ch;
	int		integer;
	float	fl;
	double	dbl;
	int presicion = 1;

	if (type == PLUS_INF) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return ;

	}
	else if (type == MINUS_INF) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	else if (type == NAN) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	if (type == INT) {
		int nb = Convert::toInt(str);

		ch = static_cast<char>(nb);
		integer = nb;
		fl = static_cast<float>(nb);
		dbl = static_cast<double>(nb);
	}
	else if (type == FLOAT) {
		float nb = Convert::toFloat(str);
		presicion = getPresicion(str);

		ch = static_cast<char>(nb);
		integer = static_cast<int>(nb);
		fl = nb;
		dbl = static_cast<double>(nb);
	}
	else if (type == DOUBLE) {
		double nb = Convert::toDouble(str);
		presicion = getPresicion(str);

		ch = static_cast<char>(nb);
		integer = static_cast<int>(nb);
		fl = static_cast<float>(nb);
		dbl = nb;
	}
	else if (type == CHAR) {
		char nb = Convert::toChar(str);
		
		ch = nb;
		integer = static_cast<int>(nb);
		fl = static_cast<float>(nb);
		dbl = static_cast<double>(nb);
	}
	else {
		std::cout << "Invalid argument" << std::endl;
		return ;
	}

	if (ch < 32 || ch > 126)
		std::cout << "char: Non displayable"  << std::endl;
	else 
		std::cout << "char: " << static_cast<char>(ch) << std::endl;
	std::cout << "int: " << integer << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(presicion) << fl << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(presicion) << dbl << std::endl;
}
