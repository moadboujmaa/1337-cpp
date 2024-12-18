/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:13:16 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/15 12:49:49 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *arr[10];

	arr[0] = new Dog();
	arr[1] = new Cat();
	arr[2] = new Animal();

	arr[0]->makeSound();
	arr[1]->makeSound();
	arr[2]->makeSound();

	for (int i = 0; i < 3; i++)
	 	delete arr[i];
	return (0);
}

