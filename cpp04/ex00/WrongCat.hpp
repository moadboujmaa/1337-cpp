/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:13:23 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/04 08:13:25 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat(void); // Default constructor
		WrongCat(const WrongCat& obj); // Copy constructor
		WrongCat&	operator=(const WrongCat& obj); // Copy assigment operator
		~WrongCat(); // Destructor

		void makeSound() const;
		std::string getType( void ) const;
};

