/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:15:30 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/24 12:24:44 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	my_replace(std::string old_str, std::string s1, std::string s2)
{
	std::string new_str;
	int	new_index = 0;

	(void) s2;
	for (int i = 0; old_str[i] != '\0'; i++) {
		int j;
        for (j = 0; s1[j] != '\0'; j++) {
            if (old_str[i + j] != s1[j]) break;
        }
        if (s1[j] == '\0') {
			new_str += s2;
			i += s1.length();
			new_index += s2.length();
		}
		else
		{
			new_str[new_index] = old_str[i];
			new_index++;
			i++;
		}
    }
	std::cout << new_str << std::endl;
	return (new_str);
}

int main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cout << "./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	char *file_name = argv[1];
	char *s1 = argv[2];
	char *s2 = argv[3];
	std::string line;
	std::string text;

	(void) s2;
	std::ifstream file(file_name);
	if (!file.is_open())
		std::cerr << "Failed to open " << file_name << std::endl;
	while (getline(file, line)) {
		if (line.find(s1) != std::string::npos)	
		{
			line = my_replace(line, s1, s2);
			continue ;
		}
		text = text + '\n' + line;
		std::cout << line << std::endl;
	}
	file.close();
	return (0);
}
