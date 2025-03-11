/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:14:31 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/11 08:53:03 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void test1() {
    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void test2() {
    Span sp(5);

    try {
        sp.addNumber(4);
        sp.addNumber(3);
        sp.addNumber(0);
        sp.addNumber(100);
        sp.addNumber(50);
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    try {
        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}

void test3() {
    Span sp(5);
    try
    {
        std::vector<int> vec;

        vec.push_back(15);
        vec.push_back(0);
        vec.push_back(12);
        vec.push_back(9);
        vec.push_back(1);
        vec.push_back(1);
        sp.addNumber(vec.begin(), vec.end());
        std::cout << vec.size() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try {
        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
}

int main(void) {
    std::cout << "Test 1: " << std::endl;
    test1();
    std::cout << "Test 2: " << std::endl;
    test2();
    std::cout << "Test 3: " << std::endl;
    test3();
    return 0;
}