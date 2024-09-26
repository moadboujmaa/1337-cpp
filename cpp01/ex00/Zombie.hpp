/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:44:29 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/26 13:14:09 by mboujama         ###   ########.fr       */
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
		Zombie*	newZombie( std::string name );
		void	randomChump( std::string name );
	private:
		std::string _name;
};

#endif