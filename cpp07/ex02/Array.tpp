/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 09:23:05 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/01 11:26:38 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : arr(new T[0]), len(0) {
    std::cout << "Array Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int _size) : arr(new T[_size]), len(_size) {
    std::cout << "Array parameter constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array& obj) : arr(new T[obj.len]), len(obj.len) {
    std::cout << "Copy operator called" << std::endl;
    for (int i = 0; i < len; i++)
        arr[i] = obj.arr[i];
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& obj) {
    if (this != &obj) {
        delete arr;

        len = obj.len;
        arr = new T[len];

        for (unsigned int i = 0; i < len; i++)
            arr[i] = obj.arr[i];
    }
    std::cout << "Copy assignement operator called" << std::endl;
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete arr;
    std::cout << "Array destructor called" << std::endl;
}

template <typename T>
unsigned int Array<T>::size(void) const {
    return len;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= len) {
        std::cout << "Index out of bound" << std::endl;
    }
    return (arr[index]);
}
