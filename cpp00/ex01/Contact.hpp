/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:53:02 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/17 07:37:45 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
using namespace std;

class Contact {
	private:
		string first_name;
		string last_name;
		string nickname;
		string phone_number;
		string darkest_secret;
	public:
		string get_first_name() const;
		string get_last_name() const;
		string get_nickname() const;
		string get_phone_number() const;
		string get_darkest_secret() const;
		void set_first_name(string first_name);
		void set_last_name(string last_name);
		void set_nickname(string nickname);
		void set_phone_number(string phone_number);
		void set_darkest_secret(string darkest_secret);
};

#endif