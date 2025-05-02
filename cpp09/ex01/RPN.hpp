/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 08:45:44 by mboujama          #+#    #+#             */
/*   Updated: 2025/05/02 11:07:48 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <stack>
#include <stdexcept>
#include <cctype>
#include <cstddef>
#include <stdexcept>

# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"

class RPN {
    private:
        std::stack<int> stack;
    public:
        RPN();
        ~RPN();
        bool isOperator(char op);
        int execute(std::string str);
        void makeCalculation(char op);
};