/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:33:38 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/25 16:20:56 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float ft_abs(float nb) {
	return nb < 0 ? -nb : nb;
}

static float CalcArea(Point p1, Point p2, Point p3) {
	float area = .5f * (ft_abs(
		p1.getX() * (p2.getY() - p3.getY()) +
		p2.getX() * (p3.getY() - p1.getY()) +
		p3.getX() * (p1.getY() - p2.getY()))
	);
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed areaABC = Fixed(CalcArea(a, b, c));
    Fixed areaPBC = Fixed(CalcArea(point, b, c));
    Fixed areaAPC = Fixed(CalcArea(a, point, c));
    Fixed areaABP = Fixed(CalcArea(a, b, point));
    if (areaPBC == 0 || areaAPC == 0 || areaABP == 0) return (false);
	if (areaABC == areaPBC + areaAPC + areaABP) return (true);
	return (false);

}
