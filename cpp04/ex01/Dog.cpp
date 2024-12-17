/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:13:26 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/17 12:07:36 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    this->brain = new Brain();
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog& obj)
{
	this->brain = new Brain(*obj.brain);
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		delete this->brain;
		this->brain = new Brain(*obj.brain);
        this->type = obj.type;
	}
	return (*this);
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}

std::string Dog::getType( void ) const {
    return type;
}

void Dog::makeSound() const
{
    std::cout << "The dog is barking" << std::endl;
}
