/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:19:34 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/18 13:17:15 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), target("target")
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("PresidentialPardonForm", 25, 5), target(_target)
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	*this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->target = obj.target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getRequiredToExecute()) {
        throw GradeTooLowException();
	}
	std::cout << "\033[32m" << target + " has been pardoned by Zaphod Beeblebrox" << "\033[32m" << std::endl;
	std::cout << "\033[32m" << executor << " executed " << *this << "\033[0m" << std::endl;
}