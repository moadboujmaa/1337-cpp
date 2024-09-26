/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:50:10 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/26 13:17:16 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie( void );
		Zombie(std::string name);
		void	announce( void );
		std::string	getName();
		Zombie* zombieHorde( int N, std::string name );
};