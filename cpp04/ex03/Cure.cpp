/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:05:03 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/11 15:25:06 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	type = "cure";
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure Destructor called" << std::endl;
}

Cure::Cure(const Cure& obj)
{
	type = obj.type;
	std::cout << "Cure Copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& obj)
{
	std::cout << "Cure Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

Cure* Cure::clone() const
{
	return new Cure();
}

std::string Cure::getType( void ) const {
	return (type);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heal's " + target.getName() + "'s wounds *" << std::endl;
}
