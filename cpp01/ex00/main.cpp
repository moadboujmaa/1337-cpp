/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:43:56 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/28 12:24:44 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main() {
	Zombie zz;
	Zombie* zom;

	zom = newZombie("moad");
	zom->announce();
	delete zom;
	zom = newZombie("rafiq");
	zom->announce();
	delete zom;
	return (0);
}
