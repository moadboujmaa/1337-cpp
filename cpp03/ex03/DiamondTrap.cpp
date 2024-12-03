/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:26:35 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/28 12:28:12 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructor
DiamondTrap::DiamondTrap(void)
{
    this->name = "default";
    ClapTrap::name = this->name + "_clap_name";
    this->energy_points = 50;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
    this->name = obj.name;
    this->attack_damage = obj.attack_damage;
    this->energy_points = obj.energy_points;
    this->hit_point = obj.hit_point;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

// Copy assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
        this->name = obj.name;
        this->attack_damage = obj.attack_damage;
        this->energy_points = obj.energy_points;
        this->hit_point = obj.hit_point;
	}
	return (*this);
}

// Destructor
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name")
{
    this->name = _name;
    this->energy_points = 50;
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}

void    DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap " + name <<  ". clap name is : " << ClapTrap::name << std::endl;
}