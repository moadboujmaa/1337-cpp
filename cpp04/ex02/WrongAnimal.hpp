/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:13:14 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/15 12:03:00 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(void); // Default constructor
		WrongAnimal(const WrongAnimal& obj); // Copy constructor
		WrongAnimal&	operator=(const WrongAnimal& obj); // Copy assigment operator
		virtual ~WrongAnimal(); // Destructor

		void makeSound() const;
		std::string getType( void ) const;
};
