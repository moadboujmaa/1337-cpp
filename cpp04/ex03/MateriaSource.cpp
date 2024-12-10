/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:01:44 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/10 10:01:46 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	delete[] inventory;
	std::cout << "MateriaSource Destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = obj.inventory[i];
	std::cout << "MateriaSource Copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
			this->inventory[i] = obj.inventory[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	int i = 0;

	if (!m)
		return ;
	while (inventory[i])
		i++;
	if (i < 4)
		this->inventory[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	AMateria nw = new AMateria(type);
	AMateria *tmp;

	for (int i = 0; i < 4; i++) {
		if (this->inventory[i]->getType() == type)
			tmp = this->inventory[i];
	}
	if (tmp)
		return (new AMateria(tmp))
	return (0);
}






