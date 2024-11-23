/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:33:38 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/23 15:50:30 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float ft_abs(float nb) {
	return nb < 0 ? -nb : nb;
}

static float CalcArea(Point p1, Point p2, Point p3) {
	Fixed half(.5f);
	float area = half.getRawBits() * ft_abs(
		p1.getX().getRawBits() * (p2.getY().getRawBits() - p3.getY().getRawBits()) +
		p2.getX().getRawBits() * (p3.getY().getRawBits() - p1.getY().getRawBits()) +
		p3.getX().getRawBits() * (p1.getY().getRawBits() - p2.getY().getRawBits())
	);
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float areaABC = CalcArea(a, b, c);
	float areaPBC = CalcArea(point, b, c);
	float areaAPC = CalcArea(a, point, c);
	float areaABP = CalcArea(a, b, point);

	if (areaPBC == 0 || areaAPC == 0 || areaABP == 0) return (false);
	if (areaABC == areaPBC + areaAPC + areaABP) return (true);
	return (false);
}
