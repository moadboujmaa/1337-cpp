/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:05:08 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/08 11:05:09 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure(void); // Default constructor
		Cure(const Cure& obj); // Copy constructor
		Cure&	operator=(const Cure& obj); // Copy assigment operator
		~Cure(); // Destructor

		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
