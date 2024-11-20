/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:01:58 by mboujama          #+#    #+#             */
/*   Updated: 2024/10/05 15:22:02 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl Harl;

	Harl.complain("WARNING");
	std::cout << "\n";
	Harl.complain("INFO");
	std::cout << "\n";
	Harl.complain("ERROR");
	std::cout << "\n";
	Harl.complain("DEBUG");
	std::cout << "\n";
	Harl.complain("HI");
	return (0);
}