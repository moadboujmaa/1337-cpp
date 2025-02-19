/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:54:02 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/19 10:56:52 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	private:
		AForm *createShrubberyCreationForm(const std::string &target) const;
		AForm *createRobotomyRequestForm(const std::string &target) const;
		AForm *createPresidentialPardonForm(const std::string &target) const;

	public:
		Intern(void);
		Intern(const Intern& obj);
		Intern&	operator=(const Intern& obj);
		~Intern();

		typedef AForm* (Intern::*fn_ptr)(const std::string &target) const;

		AForm *makeForm(std::string const & name, std::string const & target) const;

		class FormTypeNotExist: public std::exception {
			public:
				const char* what() const throw() {
					return "Form type not exist";
				}
		};
};

#endif
