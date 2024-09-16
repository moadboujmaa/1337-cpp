/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:30:12 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/16 12:36:18 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
using namespace std;

void print_strs(char **argv)
{
    int i = -1;
	int	j;

    while (argv[++i])
    {
        j = -1;
        while (argv[i][++j])
            cout << (char) toupper(argv[i][j]);
    }
    cout << endl;
}

int main(int argc, char **argv) {
	if (argc < 2)
		cout << "Program should get at least one argument" << endl;
	else
		print_strs(argv + 1);
    return 0;
}
