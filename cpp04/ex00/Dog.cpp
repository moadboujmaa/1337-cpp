/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:13:26 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/04 08:13:28 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog& obj)
{
    this->type = obj.type;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
        this->type = obj.type;
	}
	return (*this);
}

std::string Dog::getType( void ) const {
    return type;
}

void Dog::makeSound() const
{
    std::cout << "The dog is barking" << std::endl;
}
