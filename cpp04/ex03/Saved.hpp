/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Saved.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:51:18 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/17 13:07:52 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AMateria.hpp"

struct Node {
		AMateria *materia;
		struct Node *next;

		Node(AMateria *n_materia);
		~Node();
};

struct Saved {
		Node *head;

		Saved();
		void add(Node *node);
		~Saved();
};

