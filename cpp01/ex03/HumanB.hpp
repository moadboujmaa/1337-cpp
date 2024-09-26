/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:41:40 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/22 15:13:52 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon*		_weapon;
	public:
		void	attack();
		void	setWeapon(Weapon weapon);
		HumanB(std::string name);	
};

#endif
