/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:40:33 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/22 11:22:48 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon() : _type("") {};
		Weapon(std::string type);
		const std::string& getType() const;
		void setType(std::string type);
};

#endif
