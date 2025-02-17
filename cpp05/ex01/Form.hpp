/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:39:39 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/17 15:40:55 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int requiredGrade;
		const int executedGrade;
		
	public:
		Form(void);
		Form(const Form& obj);
		Form&	operator=(const Form& obj);
		~Form();
		Form(const std::string& name, int requiredGrade, int executedGrade);

		// getters
		const std::string getName() const;
		bool getIsSigned() const;
		const int getRequiredGrade() const;
		const int getExecutedGrade() const;

		void beSigned(Bureaucrat bc);

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
