/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:15:18 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/24 11:10:07 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hit_point(100), energy_points(50), attack_damage(20) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj) : name(obj.name), hit_point(obj.hit_point), energy_points(obj.energy_points), attack_damage(obj.attack_damage) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
	if (this != &obj)
	{
		this->name = obj.name;
		this->attack_damage = obj.attack_damage;
		this->energy_points = obj.energy_points;
		this->hit_point = obj.hit_point;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) : name(_name), hit_point(100), energy_points(50), attack_damage(20) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (energy_points > 0 &&
	hit_point > 0)
	{
		energy_points--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage !" << std::endl;
	}
	else std::cout << "ClapTrap " << name << " couldn't do anything!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (energy_points > 0 && hit_point > 0){
        energy_points--;
        hit_point -= amount;
        std::cout << "ClapTrap " << name << " takes damage of " << amount << " points!" << std::endl;
    }
    else std::cout << "ClapTrap " << name << " couldn't do anything!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energy_points > 0 && hit_point > 0)
	{
		hit_point += amount;
		energy_points--;
		std::cout << "ClapTrap " << name << " repaired by " << amount << " points!" << std::endl;
	}
	else std::cout << "ClapTrap " << name << " couldn't do anything!" << std::endl;
}
