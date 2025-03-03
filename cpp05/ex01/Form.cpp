/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:39:36 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/19 09:54:46 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("form"), isSigned(false), requiredToSign(1), requiredToExecute(1)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const std::string& _name, int _requiredToSign, int _requiredToExecute) : name(_name), isSigned(false), requiredToSign(_requiredToSign), requiredToExecute(_requiredToExecute) {
}

Form::~Form(void)
{
	std::cout << "Form Destructor called" << std::endl;
}

Form::Form(const Form& obj) : name(obj.name), isSigned(obj.isSigned), requiredToSign(obj.requiredToSign), requiredToExecute(obj.requiredToExecute)
{
	std::cout << "Form Copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& obj)
{
	std::cout << "Form Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->isSigned = obj.isSigned;
	return (*this);
}

const std::string Form::getName() const {
	return name;
}

bool Form::getIsSigned() const {
	return isSigned;
}

int Form::getRequiredToSign() const {
	return requiredToSign;
}

int Form::getRequiredToExecute() const {
	return requiredToExecute;
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
    os << "-> Name: " << obj.getName() << " - IsSigned: " << obj.getIsSigned() << " - Signed Grade: " << obj.getRequiredToSign() << " - Executed Grade: " << obj.getRequiredToExecute();
    return os;
}

void Form::beSigned(Bureaucrat const &bc) {
	if (bc.getGrade() > requiredToSign)
		throw GradeTooLowException();
	isSigned = true;
}
