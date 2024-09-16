/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:55:59 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/16 16:35:15 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
using namespace std;

void	print_menu()
{
	cout << "----- MENU -----\n";
	cout << "➕ ADD: save a new contact\n";
	cout << "🔍 SEARCH: display a specific contact\n";
	cout << "❌ EXIT: exit the program\n";
}

void	add_contact(PhoneBook phonebook)
{
	// Contact		new_contact;
	// string str;

	cout << "Enter first name: ";
	// cin >> str;
	// new_contact.set_first_name(str);
	
	// cout << "Enter last name: ";
	// cin >> str;
	// new_contact.set_last_name(str);

	// cout << "Enter nickname: ";
	// cin >> str;
	// new_contact.set_first_name(str);

	// cout << "Enter phone number: ";
	// cin >> str;
	// new_contact.set_first_name(str);

	// cout << "Enter darkest secret: ";
	// cin >> str;
	// new_contact.set_first_name(str);
}

void	search_contact()
{
	cout << "search\n";
}

int main()
{
	PhoneBook	phonebook;
	string		choice;

	while (1)
	{
		print_menu();
		cout << "=> Enter your choice: ";
		cin >> choice;
		if (!choice.compare("ADD"))
			add_contact(phonebook);
		else if (!choice.compare("SEARCH"))
			search_contact();
		else if (!choice.compare("EXIT"))
		{
			cout << "bye!\n";
			exit(0);
		}
		cout << "\n";
	}
	return (0);
}
