/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:13:37 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/09 10:44:29 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

template <typename T>
int easyfind(T& param, int nb) {
    typename T::iterator it;

    for (it = param.begin(); it != param.end(); it++) {
        if (*it == nb)
            return std::distance(param.begin(), it);
    }
    throw std::runtime_error("Element not found");
}

#endif

