/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:39:39 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/18 13:19:28 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool isSigned;
		const int requiredToSign;
		const int requiredToExecute;
		
	public:
		AForm(void);
		AForm(const AForm& obj);
		AForm&	operator=(const AForm& obj);
		~AForm();
		AForm(const std::string& name, int requiredToSign, int requiredToExecute);

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
				return "The grade too low";
			}
		};

		class FormNotSignedException: public std::exception {
            public:
                const char* what() const throw() {
                    return "Form should be singed";
                }
        };

		class NotRobotomizedException: public std::exception {
            public:
                const char* what() const throw() {
                    return "Form not robotomized successfully";
                }
        };

		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif
