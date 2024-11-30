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

#include "ScavTrap.hpp"

int main() {
    ScavTrap a("clap_1");

    a.attack("clap_b");
    a.attack("clap_b");
    a.takeDamage(21);
    a.takeDamage(12);
    a.takeDamage(15);
    a.beRepaired(25);
    a.takeDamage(12);
    a.takeDamage(10);
    a.takeDamage(9);
    a.beRepaired(10);
    a.takeDamage(50);
    a.takeDamage(50);
    a.takeDamage(50);
    a.attack("clap_b");
    return (0);
}
