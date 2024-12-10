/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 12:44:55 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/08 12:45:25 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

Character::Character(void)
{
	std::cout << "Character Default constructor called" << std::endl;
}

Character::~Character(void)
{
	delete[] inventory;
	std::cout << "Character Destructor called" << std::endl;
}

Character::Character(const Character& obj) : name(obj.name)
{
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
			this->inventory[i] = obj.inventory[i];
		this->name = obj.name;
	}
	return (*this);
}

std::string const & Character::getName() const {
	return name;
}

void Character::equip(AMateria* m)
{
	int i = 0;

	if (!m)
		return ;
	while (inventory[i])
		i++;
	if (i < 4)
		this->inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		inventory[i] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	inventory[i]->use(target);
}

