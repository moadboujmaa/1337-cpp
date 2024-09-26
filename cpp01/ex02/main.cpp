/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:57:24 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/26 13:23:01 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "value of str: " << str << std::endl;
	std::cout << "value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "value of stringREF: " << stringREF << std::endl;

	std::cout << "value of str: " << &str << std::endl;
	std::cout << "value of stringPTR: " << stringPTR << std::endl;
	std::cout << "value of stringREF: " << &stringREF << std::endl;
	return (0);
}
