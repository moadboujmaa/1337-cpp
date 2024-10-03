/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:55:59 by mboujama          #+#    #+#             */
/*   Updated: 2024/10/01 15:58:14 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	print_menu()
{
	std::cout << std::setw(20) << "----- MENU -----\n";
	std::cout << "➕ ADD: save a new contact\n";
	std::cout << "🔍 SEARCH: display a specific contact\n";
	std::cout << "❌ EXIT: exit the program\n";
}

int is_valid_num(std::string num)
{
	for (int i = 0; num[i]; i++) {
		if (!isnumber(num[i]))
			return (0);
	}
	return (1);
}

int is_valid_str(std::string str)
{
	for (int i = 0; str[i]; i++) {
		if (!isalpha(str[i]) && str[i] != ' ')
			return (0);
	}
	return (1);
}

void	create_contact(PhoneBook& phonebook)
{
	Contact		new_contact;
	std::string		str;

	std::cout << "Enter first name: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getline(std::cin, str);
	if (str.length() == 0)
	{
		std::cout << "first name shouldn't be empty\n" << std::endl;
		return ;
	}
	new_contact.set_first_name(str);
	
	std::cout << "Enter last name: ";
	getline(std::cin, str);
	if (!str.length() == 0)
	{
		std::cout << "last name shouldn't be empty\n" << std::endl;
		return ;
	}
	new_contact.set_last_name(str);

	std::cout << "Enter nickname: ";
	getline(std::cin, str);
	if (str.length() == 0)
	{
		std::cout << "nickname must shouldn't be empty\n" << std::endl;
		return ;
	}
	new_contact.set_nickname(str);

	std::cout << "Enter phone number: ";
	getline(std::cin, str);
	if (!is_valid_num(str) || str.length() == 0)
	{
		std::cout << "phone number must only have numbers\n" << std::endl;
		return ;
	}
	new_contact.set_phone_number(str);

	std::cout << "Enter darkest secret: ";
	getline(std::cin, str);
	if (str.length() == 0)
	{
		std::cout << "darkest secret shouldn't be empty\n" << std::endl;
		return ;
	}
	new_contact.set_darkest_secret(str);

	phonebook.add_contact(new_contact);
	std::cout << "Contact created ✅\n" << std::endl;
}

void	search_contact(PhoneBook phonebook)
{
	std::string	id;
	Contact contact;

	phonebook.print_contacts();
	std::cout << "Enter the contact id: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getline(std::cin, id);
	if (!is_valid_num(id) || stoi(id) < 0 || stoi(id) > 7 || stoi(id) > phonebook.getLenContacts() - 1) {
		std::cout << "No contact with this id\n" << std::endl;
		return ;
	}
	contact = phonebook.get_contact(stoi(id));
	std::cout << " - first_name: " << contact.get_first_name() << std::endl;
	std::cout << " - last_name: " << contact.get_last_name() << std::endl;
	std::cout << " - nickname: " << contact.get_nickname() << std::endl;
	std::cout << " - phone: " << contact.get_phone_number() << std::endl;
	std::cout << " - secret: " << contact.get_darkest_secret() << std::endl;
}

int main()
{
	PhoneBook	phonebook(0, 0);
	std::string		choice;

	while (1)
	{
		print_menu();
		std::cout << "\n=> Enter your choice: ";
		std::cin >> choice;
		if (!choice.compare("ADD"))
			create_contact(phonebook);
		else if (!choice.compare("SEARCH"))
			search_contact(phonebook);
		else if (!choice.compare("EXIT"))
		{
			std::cout << "Bye 👋\n";
			exit(0);
		}
	}
	return (0);
}
