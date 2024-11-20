/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:43:56 by mboujama          #+#    #+#             */
/*   Updated: 2024/10/03 18:19:34 by mboujama         ###   ########.fr       */
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
	randomChump("mahmoud");
	return (0);
}
