/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:56:17 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/07 18:56:18 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void); // Default constructor
		Brain(const Brain& obj); // Copy constructor
		Brain&	operator=(const Brain& obj); // Copy assigment operator
		~Brain(); // Destructor

};

#endif
