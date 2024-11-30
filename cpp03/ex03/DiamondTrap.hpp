/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:26:41 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/28 12:27:04 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string name;
	public:
		DiamondTrap(void); // Default constructor
		DiamondTrap(const DiamondTrap& obj); // Copy constructor
		DiamondTrap&	operator=(const DiamondTrap& obj); // Copy assignment operator
		~DiamondTrap(); // Destructor

        DiamondTrap(std::string name);
		void    whoAmI();
        void    attack(const std::string &target);
};

#endif
