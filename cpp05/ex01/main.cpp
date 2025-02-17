/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:38:39 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/17 13:38:05 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

void    test1() {
    std::cout << "--> test 1: too low" << std::endl;
    try
    {
        Bureaucrat br = Bureaucrat("moad", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

void    test2() {
    std::cout << "--> test 2: too high" << std::endl;
    try
    {
        Bureaucrat br = Bureaucrat("moad", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void test3() {
    std::cout << "--> test 3: increment too low" << std::endl;
    try {
        Bureaucrat br = Bureaucrat("moad", 3);

        br.increment();
        std::cout << br << std::endl;
        br.increment();
        std::cout << br << std::endl;
        br.increment();
        std::cout << br << std::endl;
        br.increment();
        std::cout << br << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

void test4() {
    std::cout << "--> test 3: increment too high" << std::endl;
    try {
        Bureaucrat br = Bureaucrat("moad", 148);

        br.decrement();
        std::cout << br << std::endl;
        br.decrement();
        std::cout << br << std::endl;
        br.decrement();
        std::cout << br << std::endl;
        br.decrement();
        std::cout << br << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    test1();
    std::cout << std::endl;
    test2();
    std::cout << std::endl;
    test3();
    std::cout << std::endl;
    test4();
    return (0);
}