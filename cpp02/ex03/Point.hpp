/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:49:37 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/25 16:21:47 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	private:
		const Fixed x;
		const Fixed y;

	public:
		Point(); // Constructor
		Point(const Point &obj); // Copy constructor
		Point &operator=(const Point &obj); // Copy assignment operator
		~Point();						 // Destructor

        Point(const float x_val, const float y_val);
		float getX();
		float getY();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif 
