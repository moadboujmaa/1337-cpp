/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:41:16 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/25 15:24:10 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "TypeCheck.hpp"

int main(int argc, char *args[]) {
    if (argc == 1)
        return (std::cout << "Not enough arguments" << std::endl, 1);

    ScalarConverter *sc = new ScalarConverter();
    sc->convert(args[1]);
    // std::cout << "Is Int: " << TypeCheck::isChar("456") << std::endl;
    // std::cout << "Is Int: " << TypeCheck::isChar("-456") << std::endl;
    // std::cout << "Is Int: " << TypeCheck::isChar("+456") << std::endl;
    // std::cout << "Is Int: " << TypeCheck::isChar("+11111456.5") << std::endl;
    // std::cout << "Is Int: " << TypeCheck::isChar("-456.5") << std::endl;
    // std::cout << "Is Int: " << TypeCheck::isChar("456.5") << std::endl;
    // std::cout << "Is Int: " << TypeCheck::isChar("456.5f") << std::endl;
    // std::cout << "Is Int: " << TypeCheck::isChar("+4554546.5123231231312f") << std::endl;
    // std::cout << "Is Int: " << TypeCheck::isChar("hello") << std::endl;
    // std::cout << "Is Int: " << TypeCheck::isChar("h") << std::endl;
    // std::cout << "Is Int: " << TypeCheck::isChar("hello") << std::endl;
    delete sc;
    return (0);
}
