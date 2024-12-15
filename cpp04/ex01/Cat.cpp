/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:13:20 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/15 12:31:34 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		delete this->brain;
		this->brain = new Brain(*obj.brain);
		this->type = obj.type;
	}
	return (*this);
}

Cat::~Cat(void)
{
	delete this->brain;
    std::cout << "Cat Destructor called" << std::endl;
}

std::string Cat::getType( void ) const {
    return type;
}

void Cat::makeSound() const
{
    std::cout << "The cat is meowing" << std::endl;
}
