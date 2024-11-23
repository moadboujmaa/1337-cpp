/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 10:49:37 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/23 10:52:38 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class Point {
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const Fixed x, const Fixed y);
		~Point();
};

#endif 
