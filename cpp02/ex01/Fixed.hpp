/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:00:56 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/25 16:19:44 by mboujama         ###   ########.fr       */
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
		Fixed(); // default constructor
		Fixed(const Fixed &obj); // copy constructor
		Fixed &operator=(const Fixed &t); // assignment operator
		~Fixed(); // destructor

        // this exercise functions
		Fixed(const int nb);
		Fixed(const float nb);
		float toFloat(void) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif