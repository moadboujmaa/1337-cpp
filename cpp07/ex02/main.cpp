/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:05:26 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/01 11:26:28 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    Array<int> *arr1 = new Array<int>(5);
    Array<int> *arr2 = new Array<int>();

    std::cout << arr2->size() << std::endl;
    *arr2 = *arr1;
    std::cout << arr2->size() << std::endl;

    delete arr1;
    delete arr2;
    return 0;
}
