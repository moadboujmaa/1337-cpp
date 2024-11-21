/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:00:56 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/21 15:47:11 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>	// round
class Fixed {
	private:
		int					fixed_nb;
		static const int	fractional_nb;
	public:
		Fixed(); // default constructor
		Fixed(const Fixed &obj); // copy constructor
		Fixed(const int nb);
		Fixed(const float nb);
		float toFloat(void) const;
		int toInt( void ) const;
		Fixed &operator=(const Fixed &t); // copy assignment operator
		Fixed &operator<<(const Fixed &t); // copy assignment operator
		~Fixed(); // destructor
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif