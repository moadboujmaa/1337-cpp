/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:19:58 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/11 08:50:26 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		std::vector<int> vec;
		unsigned int max_len;
	public:
		Span(void);
		Span(unsigned int max);
		Span(const Span& obj);
		Span&	operator=(const Span& obj);
		~Span();

		void addNumber(int nb);
		int shortestSpan();
		int longestSpan();
		
		template <typename I>
		void addNumber(I begin, I end) {
			if (vec.size() + std::distance(begin, end) > max_len)
				throw std::out_of_range("The span accepts less elements");
			vec.insert(vec.end(), begin, end);
		}
};

#endif
