/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:14:44 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/24 09:19:27 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap *a = new DiamondTrap("Moad");
//    std::cout << "a enragy : " << a.energy_points << std::endl;
     a->whoAmI();
//    a.highFivesGuys();
	return (0);
}
