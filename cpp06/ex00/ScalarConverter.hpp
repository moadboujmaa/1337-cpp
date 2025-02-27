/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:14:23 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/27 11:03:20 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include "TypeCheck.hpp"
# include "Convert.hpp"
# include <iostream>
# include <sstream>
# include <iomanip>

enum Types {
	INT, DOUBLE, FLOAT, CHAR, INVALID, INF, INFF
};

class ScalarConverter
{
	private:
		static Types getType(const std::string &str);
	public:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& obj);
		ScalarConverter&	operator=(const ScalarConverter& obj);
		~ScalarConverter();

		static void convert(const std::string &str);
};

#endif
