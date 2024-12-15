/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 09:53:37 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/15 13:07:20 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& obj)
{
	(void) obj;
	std::cout << "AMateria Copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	(void) type;
	std::cout << "AMateria Params constructor called" << std::endl;
}

std::string AMateria::getType( void ) const {
	return (type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "* What should I do with" << target.getName() << " *" << std::endl;
}
