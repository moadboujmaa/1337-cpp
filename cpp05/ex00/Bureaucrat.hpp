/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 09:36:01 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/17 13:07:35 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string _name, int grade);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat&	operator=(const Bureaucrat& obj);
		~Bureaucrat();

		const std::string getName() const;
		int getGrade() const;
		
		void increment();
		void decrement();
		
		class GradeTooHighException: public std::exception {
			public:
				const char *what() const throw() {
					return "Grade entered too high";
				}
		};
		class GradeTooLowException: public std::exception {
			public:
				const char *what() const throw() {
					return "Grade entered too low";
				}
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
