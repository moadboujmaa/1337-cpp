/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:15:30 by mboujama          #+#    #+#             */
/*   Updated: 2024/10/03 17:16:43 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	my_replace(std::string old_str, std::string s1, std::string s2)
{
	size_t		found;

	found = old_str.find(s1);
	while (found != std::string::npos)
	{
		old_str.erase(found, s1.length());
		old_str.insert(found, s2);
		found = old_str.find(s1);
	}
	return (old_str);
}

int main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cout << "./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string file_name(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::string line;
	std::string text;

	std::fstream file(file_name);
	if (!file.is_open())
		return (std::cerr << "Failed to open " << file_name << std::endl, 0);
	std::ofstream outfile(file_name + ".replace");
	if (!file.is_open())
		return (std::cerr << "Failed to create outfile" << std::endl, 0);
	while (getline(file, line)) {
		if (line.find(s1) != std::string::npos)	
			line = my_replace(line, s1, s2);
		outfile << line << std::endl;
	}
	file.close();
	return (0);
}
