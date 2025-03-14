/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:38:39 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/19 10:39:17 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

static void test1() {
    std::cout << "*** test1: grade is higher than required grade: ***" << std::endl;
    try {
        Bureaucrat bc = Bureaucrat("moad", 15);
        Form form = Form("form1", 20, 10);

        bc.signForm(form);
        std::cout << bc << std::endl;
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

static void test2() {
    std::cout << "*** test2: grade is lower than required grade: ***" << std::endl;
    try {
        Bureaucrat bc = Bureaucrat("moad", 21);
        Form form = Form("form1", 20, 10);

        bc.signForm(form);
        std::cout << bc << std::endl;
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    test1();
    std::cout << std::endl;
    test2();
    std::cout << std::endl;
    return (0);
}