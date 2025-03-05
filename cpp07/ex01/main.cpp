/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:57:15 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/05 10:00:12 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void incrementInt(int *ele) {
    (*ele)++;
}

void testWithInt() {
    int len = 3;
    int *arr = new int[len];
    
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    
    std::cout << "Before: " << std::endl;
    for (int i = 0; arr[i]; i++)
        std::cout << arr[i] << std::endl;
        
    iter(arr, len, incrementInt);

    std::cout << "\nAfter: " << std::endl;
    for (int i = 0; arr[i]; i++)
        std::cout << arr[i] << std::endl;
}

int main(void) {
    testWithInt();
    return (0);
}
