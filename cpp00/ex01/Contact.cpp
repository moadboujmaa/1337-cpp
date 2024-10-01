/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:52:59 by mboujama          #+#    #+#             */
/*   Updated: 2024/10/01 12:01:40 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_first_name() const {
	return (first_name);
}

std::string Contact::get_last_name() const {
	return (last_name);
}

std::string Contact::get_nickname() const {
	return (nickname);
}

std::string Contact::get_phone_number() const {
	return (phone_number);
}

std::string Contact::get_darkest_secret() const {
	return (darkest_secret);
}

void Contact::set_first_name(std::string new_first_name) {
	first_name = new_first_name;
}

void Contact::set_last_name(std::string new_last_name) {
	last_name = new_last_name;
}

void Contact::set_nickname(std::string new_nickname) {
	nickname = new_nickname;
}

void Contact::set_phone_number(std::string new_phone_number) {
	phone_number = new_phone_number;
}

void Contact::set_darkest_secret(std::string new_darkest_secret) {
	darkest_secret = new_darkest_secret;
}
