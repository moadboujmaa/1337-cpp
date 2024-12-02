/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:16:40 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/24 11:11:05 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string	name;
		int			hit_point;
		int			energy_points;
		int			attack_damage;
	public:
		ClapTrap(); // constructor
		ClapTrap(const ClapTrap &obj);		// Copy constructor
		ClapTrap &operator=(const ClapTrap &obj); // copy assignment operator
		virtual ~ClapTrap(); // destructor

        virtual ClapTrap(std::string name);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};	

#endif