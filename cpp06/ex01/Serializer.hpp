/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:03:06 by mboujama          #+#    #+#             */
/*   Updated: 2025/02/26 12:20:48 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>

typedef unsigned long uintptr_t;

typedef struct Data {
	std::string name;
	int 		age;
	
	Data() {}
	Data(std::string _name, int _age) : name(_name), age(_age) {}

	std::string getName() const {
		return name;
	}
	int getAge() const {
		return age;
	}
} Data;

class Serializer
{
	private:
		Serializer(void);
		Serializer(const Serializer& obj);
		Serializer&	operator=(const Serializer& obj);
		~Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

};

#endif
