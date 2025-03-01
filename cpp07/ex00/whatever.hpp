/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:38:43 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/27 16:15:34 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
    T c = a;
    a = b;
    b = c;
}

template <typename T>
T &min(T &a, T &b) {
    return (a < b ? a : b);    
}

template <typename T>
T &max(T &a, T &b) {
    return (a > b ? a : b);    
}

#endif
