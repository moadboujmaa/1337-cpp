/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:50:41 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/26 13:18:04 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie z = Zombie("hi");
	Zombie *horde = z.zombieHorde(5, "ha");
	
	for (int i = 0; i < 5; i++) {
		std::cout << "Zombie " << i << ": " << horde[i].getName() << std::endl;
	}
	Zombie *horde_2 = z.zombieHorde(5, "ja");
	for (int i = 0; i < 5; i++) {
		std::cout << "Zombie " << i << ": " << horde_2[i].getName() << std::endl;
	}
	return (0);
}