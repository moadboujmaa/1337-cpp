/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:39:36 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/17 16:08:22 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : requiredGrade(0), executedGrade(1)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const std::string& _name, int _requiredGrade, int _executedGrade) : name(_name), requiredGrade(_requiredGrade), executedGrade(_executedGrade), isSigned(false) {
}

Form::~Form(void)
{
	std::cout << "Form Destructor called" << std::endl;
}

Form::Form(const Form& obj) : name(obj.name), requiredGrade(obj.requiredGrade), executedGrade(obj.executedGrade), isSigned(obj.isSigned)
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

const int Form::getRequiredGrade() const {
	return requiredGrade;
}

const int Form::getExecutedGrade() const {
	return executedGrade;
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
    os << "Name: " << obj.getName() << " Is Signed: " << obj.getIsSigned() << " Signed Grade: " << std::to_string(obj.getRequiredGrade()) << " Executed Grade: " << std::to_string(obj.getExecutedGrade());
    return os;
}

void Form::beSigned(Bureaucrat bc) {
	if (bc.getGrade() < requiredGrade)
		isSigned = true;
	else 
		throw GradeTooLowException();
}
