/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:05:11 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/15 13:09:52 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	type = "ice";
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(const Ice& obj)
{
	type = obj.type;
	std::cout << "Ice Copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& obj)
{
	std::cout << "Ice Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

Ice* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}