/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 09:53:40 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/11 11:56:42 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(void); // Default constructor
		AMateria(const AMateria& obj); // Copy constructor
		AMateria&	operator=(const AMateria& obj); // Copy assigment operator
		virtual ~AMateria(); // Destructor

		AMateria(std::string const & type);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		std::string getType( void ) const;
};

#endif
