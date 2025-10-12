/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 08:45:41 by mboujama          #+#    #+#             */
/*   Updated: 2025/10/11 17:36:01 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

void RPN::makeCalculation(char op) {
    if (stack.size() < 2)
        throw std::runtime_error("not enough operands");
    
    int n2 = stack.top();
    stack.pop();
    int n1 = stack.top();
    stack.pop();

    switch (op) {
        case '/':
            if (n2 == 0) throw std::runtime_error("divide by 0");
            stack.push(n1 / n2);
            break;    
        case '*':
            stack.push(n1 * n2);
            break;    
        case '+':
            stack.push(n1 + n2);
            break;    
        case '-':
            stack.push(n1 - n2);
            break;    
    }
}

int RPN::execute(std::string str) {
    for (size_t i = 0; i < str.length(); i++) {
        std::string ops = "/*-+";

        if (std::isspace(str.at(i))) continue;
        
        if (ops.find(str[i]) != std::string::npos) {
            makeCalculation(str[i]);
        } else {
            isdigit(str.at(i)) 
                ? stack.push(str.at(i) - '0')
                : throw std::runtime_error("Invalid character");
        }
    }
    
    if (stack.size() != 1)
        throw std::runtime_error("invalid expression");
    
    return stack.top();
}
