/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:00:56 by mboujama          #+#    #+#             */
/*   Updated: 2024/11/25 09:08:14 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int					fixed_nb;
		static const int	fractional_nb;
	public:
		Fixed(); // default constructor
		Fixed( const Fixed &obj ); // copy constructor
		Fixed& operator=(const Fixed& obj); // copy assignment operator
		~Fixed(); // destructor

		int     getRawBits( void ) const;
		void    setRawBits( int const raw );
};

#endif