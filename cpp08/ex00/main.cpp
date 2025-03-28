/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:13:48 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/11 08:54:38 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
    std::vector<int> vec;

    vec.push_back(15);
    vec.push_back(1);
    vec.push_back(5);

    try
    {
        std::cout << easyfind(vec, 1) << std::endl;; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
