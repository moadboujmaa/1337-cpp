/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:16:48 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/24 15:16:52 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj): ClapTrap(obj)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap Param constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
        this->name = obj.name;
        this->attack_damage = obj.attack_damage;
        this->hit_point = obj.hit_point;
        this->energy_points = obj.energy_points;
	}
	return (*this);
}

void FragTrap::attack(const std::string &target) {
    if (energy_points > 0 &&
        hit_point > 0)
    {
        energy_points--;
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage !" << std::endl;
    }
    else std::cout << "FragTrap " << name << " couldn't do anything!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name << "requests a high five!" << std::endl;
}

