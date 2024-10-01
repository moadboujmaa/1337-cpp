/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:53:05 by mboujama          #+#    #+#             */
/*   Updated: 2024/10/01 13:20:07 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	PhoneBook::add_contact(Contact new_contact) {
	if (len_contacts <= 7) {
		contacts[index] = new_contact;
		index++;
		len_contacts++; 
	} 
	else {
		if (index == 8)
			index = 0;
		contacts[index] = new_contact;
		index++;
	}
}

std::string	set_field(std::string field) {
	if (field.length() > 10)
		return (field.substr(0, 9) + ".");
	return (field);
}

void	PhoneBook::print_contacts()
{
	for (int i = 0; i < len_contacts; i++)
	{
		std::cout << "+----------+----------+----------+----------+\n";
		std::cout <<  "|" << std::setw(10) << i
			<< "|" << std::setw(10) << set_field(contacts[i].get_first_name()) 
			<< "|" << std::setw(10) << set_field(contacts[i].get_last_name()) 
			<< "|" << std::setw(10) << set_field(contacts[i].get_nickname()) << "|\n";
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

Contact	PhoneBook::get_contact(int id) {
	return (contacts[id]);
}

int PhoneBook::getLenContacts() {
	return (len_contacts);
}
