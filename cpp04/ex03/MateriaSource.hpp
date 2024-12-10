/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:01:48 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/10 10:01:49 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include "AMateria.hpp"

class MateriaSource
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

#endif
