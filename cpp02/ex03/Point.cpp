/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:47:32 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/23 15:38:46 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

// Constructor
Point::Point() : _x(0), _y(0) {}

// Copy constructor
Point::Point(const Point &obj) : _x(obj._x), _y(obj._y) {}

// Copy assignment operator
Point &Point::operator=(const Point &t) {
	(void) t;
	return (*this);
}

// destructor
Point::~Point() {}

Point::Point(const Fixed x_val, const Fixed y_val) : _x(x_val), _y(y_val) {}

Fixed Point::getX() {
	return (_x);
}
Fixed Point::getY() {
	return (_y);
}
