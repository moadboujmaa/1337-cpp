/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:13:14 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/15 12:04:47 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void); // Default constructor
		Animal(const Animal& obj); // Copy constructor
		Animal&	operator=(const Animal& obj); // Copy assigment operator
		virtual ~Animal(); // Destructor

		virtual void makeSound() const;
		std::string getType( void ) const;
};
