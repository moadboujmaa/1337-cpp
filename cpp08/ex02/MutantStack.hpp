/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 07:50:48 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/10 10:28:56 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void)
		{
			std::cout << "MutantStack Default constructor called" << std::endl;
		}
		MutantStack(const MutantStack<T>& obj)
		{
			std::cout << "MutantStack Copy constructor called" << std::endl;
			*this = obj;
		}
		MutantStack&	operator=(const MutantStack<T>& obj)
		{
			std::cout << "MutantStack Copy assignment operator called" << std::endl;
			(void) obj;
			return (*this);
		}
		~MutantStack(void)
		{
			std::cout << "MutantStack Destructor called" << std::endl;
		}

		typedef typename std::stack<int>::container_type::iterator iterator;
        iterator begin() {
			return std::stack<T>::c.begin();
		}
        iterator end() {
			return std::stack<T>::c.end();
		}
};

#endif