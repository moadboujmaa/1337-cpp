/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:53:07 by mboujama          #+#    #+#             */
/*   Updated: 2024/10/01 13:15:07 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int		len_contacts;
		int		index;
	public:
		PhoneBook(int index, int len_contacts) {
			this->index = index;
			this->len_contacts = len_contacts;
		}
		void	add_contact(Contact new_contact);
		void	print_contacts();
		Contact	get_contact(int id);
		int getLenContacts();
};

#endif
