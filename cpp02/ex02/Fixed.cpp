/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:01:02 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/25 16:20:01 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_nb = 8;

//Constructor
Fixed::Fixed() : fixed_nb(0) {
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &obj) : fixed_nb(obj.fixed_nb) {
	std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->fixed_nb = obj.fixed_nb;
    return (*this);
}

// Destructor
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

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_nb = nb << fractional_nb;

}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_nb = roundf(nb * (1 << fractional_nb));
}

float Fixed::toFloat(void) const {
	return ((float)fixed_nb / (1 << fractional_nb));
}

int Fixed::toInt(void) const {
	return (fixed_nb >> fractional_nb);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

//? This exercise functions:
// 6 comparison operators
// overload <
bool Fixed::operator<(const Fixed &obj) {
    if (this->getRawBits() < obj.getRawBits())
        return true;
    return false;
}

// overload >
bool Fixed::operator>(const Fixed &obj) {
    if (this->getRawBits() > obj.getRawBits())
        return true;
    return false;
}

// overload <=
bool Fixed::operator<=(const Fixed &obj) {
    if (this->getRawBits() <= obj.getRawBits())
        return true;
    return false;
}

// overload >=
bool Fixed::operator>=(const Fixed &obj) {
    if (this->getRawBits() >= obj.getRawBits())
        return true;
    return false;
}

// overload ==
bool Fixed::operator==(const Fixed &obj) {
    if (this->getRawBits() == obj.getRawBits())
        return true;
    return false;
}

// overload !=
bool Fixed::operator!=(const Fixed &obj) {
    if (this->getRawBits() != obj.getRawBits())
        return true;
    return false;
}

/// 4 arithmetic operators
// overload +
Fixed Fixed::operator+(const Fixed &obj) {
    Fixed ret;
    ret.setRawBits(this->getRawBits() + obj.getRawBits());
    return (ret);
}

//overload -
Fixed Fixed::operator-(const Fixed &obj) {
    Fixed ret;
    ret.setRawBits(this->getRawBits() - obj.getRawBits());
    return (ret);
}

//overload *
Fixed Fixed::operator*(const Fixed &obj) {
    Fixed ret;
    ret.setRawBits((this->getRawBits() * obj.getRawBits()) >> fractional_nb);
    return (ret);
}

//overload /
Fixed Fixed::operator/(const Fixed &obj) {
    Fixed ret;
    ret.setRawBits((this->getRawBits() * (1 << fractional_nb)) / obj.getRawBits());
    return (ret);
}

/// 4 increment/decrement operators
// overload pre-increment
Fixed Fixed::operator++() {
    this->fixed_nb++;
    return *this;
}

// overload post-increment
Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    this->fixed_nb++;
    return tmp;
}

// overload pre-decrement
Fixed Fixed::operator--() {
    this->fixed_nb--;
    return *this;
}

// overload post-decrement
Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    this->fixed_nb--;
    return tmp;
}

/// 4 member functions:
// min(Fixed, Fixed)
Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a.getRawBits() < b.getRawBits() ? a : b);
}

// min(const Fixed, const Fixed)
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a.getRawBits() < b.getRawBits() ? a : b);
}

// max(Fixed, Fixed)
Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a.getRawBits() > b.getRawBits() ? a : b);
}

// max(const Fixed, const Fixed)
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a.getRawBits() > b.getRawBits() ? a : b);
}
