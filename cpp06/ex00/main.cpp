/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:41:16 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/03 08:34:34 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "TypeCheck.hpp"

int main(int argc, char *args[]) {
    if (argc == 1)
        return (std::cout << "Not enough arguments" << std::endl, 1);

    ScalarConverter *sc = new ScalarConverter();
    sc->convert(args[1]);
    delete sc;
    return (0);
}
