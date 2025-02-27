/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:43:30 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/27 10:55:46 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <sstream>
# include <string> 
# include <cstdlib>

class Convert
{
	private:
		Convert(void);
		Convert(const Convert& obj);
		Convert&	operator=(const Convert& obj);
		~Convert();
	public:
		static int toInt(const std::string &str);
		static double toDouble(const std::string &str);
		static char toChar(const std::string &str);
		static float toFloat(const std::string &str);

};

#endif
