/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:43:56 by mboujama          #+#    #+#             */
/*   Updated: 2024/09/18 13:45:56 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main() {
	Zombie zz;
	Zombie* zom;

	zom = zz.newZombie("moad");
	zom->announce();
	zom = zz.newZombie("rafiq");
	zom->announce();
	return (0);
}
