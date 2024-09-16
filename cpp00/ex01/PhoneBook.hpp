/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:53:07 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/16 16:00:00 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int		len_contacts;
	public:
		void	add_contact(Contact new_contact);
		int		get_len_contacts();
};

#endif
