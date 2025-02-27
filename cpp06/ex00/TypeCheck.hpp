/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeCheck.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:37:21 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/25 11:14:49 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPECHECK_HPP
# define TYPECHECK_HPP
# include <iostream>

class TypeCheck
{
	private:
		TypeCheck(void);
		TypeCheck(const TypeCheck& obj);
		TypeCheck&	operator=(const TypeCheck& obj);
		~TypeCheck();
	public:
		static bool isChar(std::string ele);
		static bool isInt(std::string ele);
		static bool isFloat(std::string ele);
		static bool isDouble(std::string ele);
		static bool isInf(std::string ele);
		static bool isInff(std::string ele);
};

#endif
