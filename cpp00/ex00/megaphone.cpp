/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:30:12 by mboujama          #+#    #+#             */
/*   Updated: 2024/10/01 11:34:58 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void print_strs(char **argv)
{
    int i = -1;
	int	j;

    while (argv[++i])
    {
        j = -1;
        while (argv[i][++j])
            std::cout << (char) toupper(argv[i][j]);
    }
    std::cout << std::endl;
}

int main(int argc, char **argv) {
	if (argc < 2)
		std::cout << "Program should get at least one argument" << std::endl;
	else
		print_strs(argv + 1);
    return 0;
}
