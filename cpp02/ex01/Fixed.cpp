/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:01:02 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/21 15:48:00 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_nb = 8;

Fixed::Fixed() : fixed_nb(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) : fixed_nb(obj.fixed_nb) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_nb = nb << fractional_nb;

}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_nb = round(nb * (1 << fractional_nb));
}

float Fixed::toFloat(void) const {
	return ((float)fixed_nb / (1 << fractional_nb));
}

int Fixed::toInt(void) const {
	return (fixed_nb >> fractional_nb);
}

Fixed &Fixed::operator=(const Fixed &t)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &t)
		this->fixed_nb = t.fixed_nb;
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_nb);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	fixed_nb = raw;
}
