/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:01:48 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/11 12:07:08 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstring>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include "Cure.hpp"
# include "Ice.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *inventory[4];
	public:
		MateriaSource(void); // Default constructor
		MateriaSource(const MateriaSource& obj); // Copy constructor
		MateriaSource&	operator=(const MateriaSource& obj); // Copy assigment operator
		~MateriaSource(); // Destructor

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};


