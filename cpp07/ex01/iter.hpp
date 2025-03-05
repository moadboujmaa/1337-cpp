/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:57:13 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/05 08:56:41 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename Func>
void iter(T *arr, unsigned int len, Func (fn)(T *)) {
    unsigned int i = 0;

    while (i < len) {
        fn(&arr[i]);
        i++;
    }
}

#endif