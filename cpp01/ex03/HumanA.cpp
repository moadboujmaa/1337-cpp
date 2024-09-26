/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:41:29 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/22 15:11:32 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) {
	_name = name;
	_weapon = &weapon;
}

void	HumanA::attack() {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
