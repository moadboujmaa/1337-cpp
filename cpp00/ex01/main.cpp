/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:55:59 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/17 10:01:14 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	print_menu()
{
	cout << "----- MENU -----\n";
	cout << "➕ ADD: save a new contact\n";
	cout << "🔍 SEARCH: display a specific contact\n";
	cout << "❌ EXIT: exit the program\n";
}

void	create_contact(PhoneBook& phonebook)
{
	Contact		new_contact;
	string		str;

	cout << "Enter first name: ";
	cin >> str;
	new_contact.set_first_name(str);
	
	cout << "Enter last name: ";
	cin >> str;
	new_contact.set_last_name(str);

	cout << "Enter nickname: ";
	cin >> str;
	new_contact.set_nickname(str);

	cout << "Enter phone number: ";
	cin >> str;
	new_contact.set_phone_number(str);

	cout << "Enter darkest secret: ";
	cin >> str;
	new_contact.set_darkest_secret(str);

	cout << "first_name " << new_contact.get_first_name() << endl;
	cout << "last_name " << new_contact.get_last_name() << endl;
	cout << "nickname " << new_contact.get_nickname() << endl;
	cout << "phone " << new_contact.get_phone_number() << endl;
	cout << "secret " << new_contact.get_darkest_secret() << endl;

	phonebook.add_contact(new_contact);

	cout << "Contact created ✅" << endl;
}

void	search_contact()
{
	cout << "search\n";
}

int main()
{
	PhoneBook	phonebook(0, 0);
	string		choice;

	while (1)
	{
		print_menu();
		cout << "\n=> Enter your choice: ";
		cin >> choice;
		if (!choice.compare("ADD"))
		{
			create_contact(phonebook);
			phonebook.print_contacts();
		}
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
