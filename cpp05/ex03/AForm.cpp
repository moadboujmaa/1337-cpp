/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:39:36 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/18 09:20:56 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : name("mr.nobody"), isSigned(false), requiredToSign(1), requiredToExecute(1)
{
	std::cout << "Form Default constructor called" << std::endl;
}

AForm::AForm(const std::string& _name, int _requiredToSign, int _requiredToExecute) : name(_name), isSigned(false), requiredToSign(_requiredToSign), requiredToExecute(_requiredToExecute) {
}

AForm::~AForm(void)
{
	std::cout << "Form Destructor called" << std::endl;
}

AForm::AForm(const AForm& obj) : name(obj.name), isSigned(obj.isSigned), requiredToSign(obj.requiredToSign), requiredToExecute(obj.requiredToExecute)
{
	std::cout << "Form Copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& obj)
{
	std::cout << "Form Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->isSigned = obj.isSigned;
	return (*this);
}

const std::string AForm::getName() const {
	return name;
}

bool AForm::getIsSigned() const {
	return isSigned;
}

int AForm::getRequiredToSign() const {
	return requiredToSign;
}

int AForm::getRequiredToExecute() const {
	return requiredToExecute;
}

std::ostream& operator<<(std::ostream& os, const AForm& obj) {
    os << "-> Name: " << obj.getName() << " - IsSigned: " << obj.getIsSigned() << " - Signed Grade: " << obj.getRequiredToSign() << " - Executed Grade: " << obj.getRequiredToExecute();
    return os;
}

void AForm::beSigned(Bureaucrat const &bc) {
	if (bc.getGrade() > requiredToSign)
		throw GradeTooLowException();
	isSigned = true;
}
