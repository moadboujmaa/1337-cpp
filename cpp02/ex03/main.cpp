/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:00:59 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/23 15:49:22 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
    Fixed ax(5.0f);
    Fixed ay(2.7f);
    Point a(ax, ay);

    Fixed bx(1.6f);
    Fixed by(2.4f);
    Point b(bx, by);

    Fixed cx(7.3f);
    Fixed cy(4.1f);
    Point c(cx, cy);

    Fixed px(5.0f);
    Fixed py(2.7f);
    Point p(px, py);
    
    std::cout << bsp(a, b, c, p) << std::endl;
    
    return 0;
}