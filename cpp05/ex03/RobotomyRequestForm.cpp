/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:16:16 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/18 12:30:56 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 145, 137), target("target")
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("RobotomyRequestForm", 145, 137), target(_target)
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm("RobotomyRequestForm", 145, 137)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	*this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->target = obj.target;
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getRequiredToExecute()) {
        throw GradeTooLowException();
	}

	std::cout << "making some noise ..." << std::endl;
	std::cout << "making some noise ..." << std::endl;
	std::cout << "making some noise ..." << std::endl;

	srand(time(0));
	int random = rand() % 2;

	if (random == 0)
		std::cout << target + "has been robotomized successfully" << std::endl;
	else
		throw NotRobotomizedException();
	std::cout << "\033[32m" << executor << " executed " << *this << "\033[0m" << std::endl;
}