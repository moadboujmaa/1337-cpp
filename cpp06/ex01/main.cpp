/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:13:33 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/26 12:24:06 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp" 

int main(void) {
    Data *ptr = new Data("moad", 21);
    
    std::cout << "Before serialize: " << ptr->getName() + " + " << ptr->getAge() << std::endl;
    
    uintptr_t ser = Serializer::serialize(ptr);

    Data *ptr2 = Serializer::deserialize(ser);

    std::cout << "After serialize: " << ptr2->getName() + " + " << ptr2->getAge() << std::endl;

    delete ptr;
    return 0;
}
