/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:09:27 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/05 08:12:06 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array {
    private:
        T *arr;
        unsigned int len;
    public:
        Array();
        Array(unsigned int _size);
        ~Array();
        Array(const Array& obj);
        Array& operator=(const Array& obj);
        T& operator[](unsigned int index);
        unsigned int size(void) const;

        class IndexOutOfBoundsException : public std::exception {
            public: 
                const char *what() const throw() {
                    return ("Index out of bounds");      
                }
        };
};

#include "Array.tpp"
