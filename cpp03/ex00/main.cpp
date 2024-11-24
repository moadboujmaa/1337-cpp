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

#include "ClapTrap.hpp"

int main() {
	ClapTrap a("clap_1");

    std::cout << "energy: " << a.energy_points << "  -  hit points: " << a.hit_point << std::endl;
    a.attack("clap_2");
    std::cout << "energy: " << a.energy_points << "  -  hit points: " << a.hit_point << std::endl;
    a.attack("clap_2");
    std::cout << "energy: " << a.energy_points << "  -  hit points: " << a.hit_point << std::endl;
    a.attack("clap_2");
    std::cout << "energy: " << a.energy_points << "  -  hit points: " << a.hit_point << std::endl;
    a.attack("clap_2");
    std::cout << "energy: " << a.energy_points << "  -  hit points: " << a.hit_point << std::endl;
    a.attack("clap_2");
    std::cout << "energy: " << a.energy_points << "  -  hit points: " << a.hit_point << std::endl;
    a.attack("clap_2");
    std::cout << "energy: " << a.energy_points << "  -  hit points: " << a.hit_point << std::endl;
    a.takeDamage(3);
    std::cout << "energy: " << a.energy_points << "  -  hit points: " << a.hit_point << std::endl;
    a.takeDamage(3);
    std::cout << "energy: " << a.energy_points << "  -  hit points: " << a.hit_point << std::endl;
    a.takeDamage(3);
    std::cout << "energy: " << a.energy_points << "  -  hit points: " << a.hit_point << std::endl;
    a.takeDamage(3);
    std::cout << "energy: " << a.energy_points << "  -  hit points: " << a.hit_point << std::endl;
    a.takeDamage(3);
    std::cout << "energy: " << a.energy_points << "  -  hit points: " << a.hit_point << std::endl;
    return (0);
}
