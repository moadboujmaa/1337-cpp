/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:39:39 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/19 08:52:39 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int requiredToSign;
		const int requiredToExecute;
		
	public:
		Form(void);
		Form(const Form& obj);
		Form&	operator=(const Form& obj);
		~Form();
		Form(const std::string& name, const int requiredToSign, const int requiredToExecute);

		const std::string getName() const;
		bool getIsSigned() const;
		int getRequiredToSign() const;
		int getRequiredToExecute() const;

		void beSigned(Bureaucrat const &bc);

		class GradeTooHighException: public std::exception {
			const char *what() const throw() {
				return "The grade too high";
			}
		};

		class GradeTooLowException: public std::exception {
			const char *what() const throw() {
				return "The grade too high";
			}
		};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
