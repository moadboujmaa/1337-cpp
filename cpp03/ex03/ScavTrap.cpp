/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 11:03:57 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/24 11:32:36 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap(void)
{
    this->hit_point = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        this->hit_point = obj.hit_point;
        this->attack_damage = obj.attack_damage;
        this->energy_points = obj.energy_points;
    }
    return (*this);
}

// Destructor
ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    this->hit_point = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap params constructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (energy_points > 0 &&
        hit_point > 0)
    {
        energy_points--;
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage !" << std::endl;
    }
    else std::cout << "ScavTrap " << name << " couldn't do anything!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << name << " ScavTrap is now in Gate keeper mode" << std::endl;
}
