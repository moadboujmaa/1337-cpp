/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:44:29 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/28 12:23:19 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie( void );
		Zombie(std::string name);
		~Zombie( void );
		void	announce( void );
	private:
		std::string _name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif