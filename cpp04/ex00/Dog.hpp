/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:13:29 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/15 11:35:01 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void); // Default constructor
		Dog(const Dog& obj); // Copy constructor
		Dog&	operator=(const Dog& obj); // Copy assigment operator
		~Dog(); // Destructor

        void makeSound() const;
		std::string getType( void ) const;
};
