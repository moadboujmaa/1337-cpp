/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:31:21 by mboujama          #+#    #+#             */
/*   Updated: 2024/10/03 11:09:42 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	
	if (argc > 1) {
		std::string msg(argv[1]);
		harl.complain(msg);
	} else {
		std::cout << "Program requires at least one argument" << std::endl;
	}
	return (0);
}
