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

    a.attack("clap_b");
    a.takeDamage(2);
    a.takeDamage(2);
    a.takeDamage(2);
    a.takeDamage(2);
    a.takeDamage(2);
    a.takeDamage(2);
    a.beRepaired(3);
    return (0);
}
