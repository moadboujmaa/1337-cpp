/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:13:16 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/15 12:51:11 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

void ll( void )
{
	system("leaks -q brain");
}

int main()
{
	Animal *arr[10];

	arr[0] = new Dog();
	arr[1] = new Cat();

	arr[0]->makeSound();
	arr[1]->makeSound();

	//!!!! Why there is no leaks ??
	// for (int i = 0; i < 1; i++)
	// 	delete arr[i];
	system("leaks -q brain");
	return (0);
}

