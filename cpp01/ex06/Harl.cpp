/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:31:39 by mboujama          #+#    #+#             */
/*   Updated: 2024/10/03 12:58:56 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug( void ) {
	std::cout << "[ DEBUG ] \nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[ INFO ] I cannot believe adding extra bacon costs more money.\n You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ] This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain( std::string level ) {
	std::string	strs[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++) {
		if (level == strs[i])
		{
			switch(i) {
				case 0:
					debug();
					i++;
				case 1:
					info();
					i++;
				case 2:
					warning();
					i++;
				case 3:
					error();
					break ;
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
