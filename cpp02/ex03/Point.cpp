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
Point::Point() : x(0), y(0) {}

// Copy constructor
Point::Point(const Point &obj) : x(obj.x), y(obj.y) {}

// Copy assignment operator
Point &Point::operator=(const Point &obj) {
	(void) obj;
	return (*this);
}

// destructor
Point::~Point() {}

Point::Point(const float x_val, const float y_val) : x(x_val), y(y_val) {}

float Point::getX() {
	return (x.toFloat());
}

float Point::getY() {
	return (y.toFloat());
}
