/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:13:16 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/04 09:13:17 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main( void )
{
//	const Animal* meta = new Animal();
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//
//	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound(); //will output the cat sound!
//	j->makeSound();
//	meta->makeSound();
//
//    std::cout << "------------------------------------" << std::endl;
//
//	WrongAnimal *meta2 = new WrongCat();
//	meta2->makeSound();
//	delete meta2;

	Dog *dog1 = new Dog();
	Dog *dog2 = new Dog(*dog1);

	delete dog1;
	(void) dog2;
//	delete dog2;
	system("leaks -q poly");
    return (0);
}
