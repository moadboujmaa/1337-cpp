/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:53:05 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/17 09:51:49 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	PhoneBook::add_contact(Contact new_contact) {
	printf("here\n");
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
	cout << index << len_contacts << endl;
}


void	PhoneBook::print_contacts()
{
	// cout << "here index = " << index << "len" << len_contacts << endl;
	for (int i = 0; i < len_contacts; i++)
	{
		cout << "+----------+----------+----------+----------+\n";
		cout << "|" << contacts[i].get_first_name() << "|" << contacts[i].get_last_name() << "|" << contacts[i].get_nickname() << "|" << contacts[i].get_phone_number() << "|\n";
		cout << "+----------+----------+----------+----------+\n";
	}
}