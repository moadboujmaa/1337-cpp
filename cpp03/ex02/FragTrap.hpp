/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:16:45 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/24 15:16:47 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(void); // Default constructor
		FragTrap(const FragTrap& obj); // Copy constructor
        FragTrap(std::string name);
		FragTrap&	operator=(const FragTrap& obj); // Copy assigment operator
		~FragTrap(); // Destructor
        void attack(const std::string &target);
        void highFivesGuys(void);
};

#endif
