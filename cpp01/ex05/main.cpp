/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:01:58 by mboujama          #+#    #+#             */
/*   Updated: 2024/10/02 16:19:54 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl Harl;

	Harl.complain("WARNING");
	Harl.complain("INFO");
	Harl.complain("ERROR");
	Harl.complain("DEBUG");
	Harl.complain("HI");
	return (0);
}