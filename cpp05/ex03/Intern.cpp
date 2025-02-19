/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:53:59 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/19 11:03:31 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern Destructor called" << std::endl;
}

Intern::Intern(const Intern& obj)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	*this = obj;
}

Intern& Intern::operator=(const Intern& obj)
{
	std::cout << "Intern Copy assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

AForm *Intern::createShrubberyCreationForm(const std::string &target) const {
	return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomyRequestForm(const std::string &target) const {
	return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialPardonForm(const std::string &target) const {
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string const & name, std::string const & target) const {
	std::string forms[3] = {
		"robotomy request",
		"shrubbery creation",
		"presidential pardon"
	};

	fn_ptr fns[3] = {
		&Intern::createRobotomyRequestForm,
		&Intern::createShrubberyCreationForm,
		&Intern::createPresidentialPardonForm,
	};

	for (int i = 0; i < 3; i++) {
		if (name == forms[i]) {
			AForm *form = (this->*fns[i])(target);
			std::cout << "Intern created " << *form << std::endl;
			return form;
		}
	}
	throw FormTypeNotExist();
}