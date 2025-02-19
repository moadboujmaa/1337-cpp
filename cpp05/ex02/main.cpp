/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:38:39 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/19 10:52:24 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void test1() {
    std::cout << "*** test1: ShrubberyCreationForm signed ***" << std::endl;
    try {
        ShrubberyCreationForm sh = ShrubberyCreationForm("form1");
        Bureaucrat bc = Bureaucrat("moad", 15);
        std::cout << std::endl;
        bc.signForm(sh);
        sh.execute(bc);
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
}

void test2() {
    std::cout << "*** test2: ShrubberyCreationForm not signed ***" << std::endl;
    try {
        ShrubberyCreationForm sh = ShrubberyCreationForm("form2");
        Bureaucrat bc = Bureaucrat("moad", 15);
        sh.execute(bc);
    } catch (std::exception& e) {
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
}

void test3() {
    std::cout << "*** test3: RobotomyRequestForm not signed ***" << std::endl;
    try {
        RobotomyRequestForm sh = RobotomyRequestForm("form3");
        Bureaucrat bc = Bureaucrat("moad", 15);
        sh.execute(bc);
    } catch (std::exception& e) {
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
}

void test4() {
    std::cout << "*** test4: RobotomyRequestForm signed ***" << std::endl;
    try {
        RobotomyRequestForm sh = RobotomyRequestForm("form4");
        Bureaucrat bc = Bureaucrat("moad", 15);
        bc.signForm(sh);
        sh.execute(bc);
    } catch (std::exception& e) {
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
}

void test5() {
    std::cout << "*** test5: Low grade ***" << std::endl;
    try {
        PresidentialPardonForm sh = PresidentialPardonForm("form5");
        Bureaucrat bc = Bureaucrat("moad", 15);
        bc.signForm(sh);
        sh.execute(bc);
    } catch (std::exception& e) {
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
}

void test6() {
    std::cout << "*** test6: PresidentialPardon Form not signed ***" << std::endl;
    try {
        PresidentialPardonForm sh = PresidentialPardonForm("form6");
        Bureaucrat bc = Bureaucrat("moad", 15);
        sh.execute(bc);
    } catch (std::exception& e) {
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;
    }
}

void test7() {
    std::cout << "*** test7: PresidentialPardon Form signed ***" << std::endl;
    try {
        PresidentialPardonForm sh = PresidentialPardonForm("form7");
        Bureaucrat bc = Bureaucrat("moad", 3);
        bc.signForm(sh);
        sh.execute(bc);
    } catch (std::exception& e) {
        std::cout << "\033[31m" << e.what() << "\033[0m" << std::endl;
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
    std::cout << std::endl;
    test5();
    std::cout << std::endl;
    test6();
    std::cout << std::endl;
    test7();
    return (0);
}