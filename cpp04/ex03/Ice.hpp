/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:05:14 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/15 13:07:53 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void); // Default constructor
		Ice(const Ice& obj); // Copy constructor
		Ice&	operator=(const Ice& obj); // Copy assigment operator
		~Ice(); // Destructor

		Ice* clone() const;
		void use(ICharacter& target);
};

#endif
