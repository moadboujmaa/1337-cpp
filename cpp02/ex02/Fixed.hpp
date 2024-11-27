/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:00:56 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/25 16:20:31 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int					fixed_nb;
		static const int	fractional_nb;
	public:
		Fixed(); // Constructor
		Fixed(const Fixed &obj); // Copy constructor
        Fixed &operator=(const Fixed &obj); // Copy assignment operator
        ~Fixed(); // Destructor
        int getRawBits( void ) const;
        void setRawBits( int const raw );

		Fixed(const int nb);
		Fixed(const float nb);
        float toFloat(void) const;
        int toInt( void ) const;

        //? This exercise functions
        // 6 comparison operators:
        bool operator<(const Fixed &obj);
        bool operator>(const Fixed &obj);
        bool operator<=(const Fixed &obj);
        bool operator>=(const Fixed &obj);
        bool operator==(const Fixed &obj);
        bool operator!=(const Fixed &obj);
        // 4 arithmetic operators:
        Fixed operator+(const Fixed &obj);
        Fixed operator-(const Fixed &obj);
        Fixed operator*(const Fixed &obj);
        Fixed operator/(const Fixed &obj);
        // 4 increment/decrement:
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        // 4 member functions:
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif