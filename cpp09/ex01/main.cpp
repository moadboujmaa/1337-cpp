/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:17:04 by mboujama          #+#    #+#             */
/*   Updated: 2025/05/02 11:02:21 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int argc, char **argv) {
    
    try {
        if (argc != 2)
            throw std::runtime_error("invalid input");
        RPN rpn;

        int res = rpn.execute(argv[1]);

        std::cout << GREEN << res << RESET << std::endl;
    } catch(const std::exception &e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    return 0;
}