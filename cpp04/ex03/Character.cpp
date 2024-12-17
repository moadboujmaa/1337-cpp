/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:44:55 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/17 13:19:31 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	saved = new Saved();
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character Default constructor called" << std::endl;
}

Character::~Character(void)
{
	delete saved;
	for (int i = 0; i < 4; i++) 
		delete inventory[i];
	std::cout << "Character Destructor called" << std::endl;
}

Character::Character(const Character& obj) : name(obj.name)
{
	saved = new Saved();
	for (int i = 0; i < 4; i++)
		this->inventory[i] = obj.inventory[i];
	std::cout << "Character Copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& obj)
{
	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
			delete this->inventory[i];
		for (int i = 0; i < 4; i++)
			this->inventory[i] = obj.inventory[i];
		this->name = obj.name;
	}
	return (*this);
}

Character::Character(std::string name) {
	saved = new Saved();
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character params constructor called" << std::endl;
}

std::string const & Character::getName() const {
	return name;
}

void Character::equip(AMateria* m)
{
	int i = 0;

	if (!m)
		return ;
	while (inventory[i] && i < 4)
		i++;

	if (i < 4)
		this->inventory[i] = m;
}

void Character::unequip(int idx)
{
	saved->add(new Node(inventory[idx]));
	if (idx >= 0 && idx <= 3)
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4) {
        std::cout << "Index out of range" << std::endl;
        return;
    }
	if (inventory[idx]) {
        inventory[idx]->use(target);
    } else {
        std::cout << "Inventory is empty" << std::endl;
    }
}

