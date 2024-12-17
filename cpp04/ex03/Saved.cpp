/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Saved.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:51:54 by mboujama          #+#    #+#             */
/*   Updated: 2024/12/17 09:52:01 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Saved.hpp"

Saved::Saved() {
	std::cout << "Saved called" << std::endl;
}

Node::Node(AMateria *n_materia) : materia(n_materia) {}

Node::~Node() {
	delete materia;
}

void Saved::add(Node *node) {
	Node *old_head = head;
	head = node;
	node->next = old_head;
}

Saved::~Saved() {
	std::cout << "~Saved called" << std::endl;
	Node *tmp;
	while (head)
	{
		tmp = head->next;
		delete head;
		head = tmp;
	}
}
