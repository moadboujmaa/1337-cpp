/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:35:39 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/03 10:07:10 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {    
    srand(time(NULL));
    int rnd = (rand() % 3) + 1;

    if (rnd == 1)
        return (dynamic_cast<Base*>(new A()));
    else if (rnd == 2)
        return (dynamic_cast<Base*>(new B()));
    else
        return (dynamic_cast<Base*>(new C()));
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "Object of type A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "Object of type B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "Object of type C" << std::endl;
}

void identify(Base& p) {
    try
    {
        if (dynamic_cast<A*>(&p))
            std::cout << "Object of type A" << std::endl;
    } catch (std::exception &e) {
        (void) e;
    }
    try
    {
        if (dynamic_cast<B*>(&p))
            std::cout << "Object of type B" << std::endl;
    } catch (std::exception &e) {
        (void) e;
    }
    try
    {
        if (dynamic_cast<C*>(&p))
            std::cout << "Object of type C" << std::endl;
    } catch (std::exception &e) {
        (void) e;
    }
}

int main(void) {
    Base *obj = generate();
    identify(*obj);
    identify(obj);
    std::cout << std::endl;
    return 0;
}
