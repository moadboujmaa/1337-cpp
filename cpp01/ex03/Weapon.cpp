/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:40:54 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/22 15:11:56 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	_type = type;
}

const std::string&	Weapon::getType() const {
	return (_type);
}

void	Weapon::setType(std::string type) {
	_type = type;
}
