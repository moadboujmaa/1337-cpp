/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:13:23 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/15 12:07:42 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat(void); // Default constructor
		Cat(const Cat& obj); // Copy constructor
		Cat&	operator=(const Cat& obj); // Copy assigment operator
		~Cat(); // Destructor

        void makeSound() const;
        std::string getType( void ) const;
};
