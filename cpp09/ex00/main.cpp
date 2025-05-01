/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 08:32:02 by mboujama          #+#    #+#             */
/*   Updated: 2025/05/01 12:40:37 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << RED << "Error: could not open file." << RESET << std::endl;
        return 1;
    }

    try {
        BitcoinExchange exchange;

        exchange.fillDB();
        
        std::string filename(argv[1]);
        exchange.processFile(filename);

    } catch (std::exception &e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    return 0;
}