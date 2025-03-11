/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:20:02 by mboujama          #+#    #+#             */
/*   Updated: 2025/03/11 08:50:17 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	std::cout << "Span Default constructor called" << std::endl;
}

Span::Span(unsigned int max)
{
	max_len = max;
}

Span::~Span(void)
{
	std::cout << "Span Destructor called" << std::endl;
}

Span::Span(const Span& obj)
{
	std::cout << "Span Copy constructor called" << std::endl;
	*this = obj;
}

Span& Span::operator=(const Span& obj)
{
	std::cout << "Span Copy assignment operator called" << std::endl;
	(void) obj;
	return (*this);
}

void Span::addNumber(int nb) {
	if (vec.size() >= max_len)
		throw std::runtime_error("Span is full");
	vec.push_back(nb);
}

int Span::shortestSpan() {
	if (vec.size() <= 1)
		throw std::runtime_error("Insufficient element");
	std::sort(vec.begin(), vec.end());

	int shortest = vec.back();
	std::vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end() - 1; it++) {
		if (*(it + 1) - *it <= shortest)
			shortest = *(it + 1) - *it;
	}
	return shortest;
}

int Span::longestSpan() {
	if (vec.size() <= 1)
		throw std::runtime_error("Insufficient element");
	std::sort(vec.begin(), vec.end());
	return (vec.back() - vec.front());
}
