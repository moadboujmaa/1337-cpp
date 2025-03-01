/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:57:13 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/27 16:15:02 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename Arr, typename Len, typename Func>
void iter(Arr *arr, Len len, Func fn) {
    Len i = 0;

    while (i < len) {
        fn(&arr[i]);
        i++;
    }
}

#endif