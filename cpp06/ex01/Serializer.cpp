/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:03:04 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/26 12:18:29 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout << "Serializer Default constructor called" << std::endl;
}

Serializer::~Serializer(void)
{
	std::cout << "Serializer Destructor called" << std::endl;
}

Serializer::Serializer(const Serializer& obj)
{
	std::cout << "Serializer Copy constructor called" << std::endl;
	*this = obj;
}

Serializer& Serializer::operator=(const Serializer& obj)
{
	std::cout << "Serializer Copy assignment operator called" << std::endl;
	if (this != &obj)
	{}
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

