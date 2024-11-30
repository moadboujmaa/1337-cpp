/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 11:04:04 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/24 11:31:31 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap(void); // Default constructor
    ScavTrap(const ScavTrap& obj); // Copy constructor
    ScavTrap&	operator=(const ScavTrap& obj); // Copy assignment operator
    ~ScavTrap(); // Destructor

    ScavTrap(std::string name);
    void attack(const std::string &target);
    void guardGate();
};

#endif
