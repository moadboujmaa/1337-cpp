/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:00:58 by mboujama          #+#    #+#             */
/*   Updated: 2025/09/02 12:55:44 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

void fillContainers(int argc, char **argv, std::vector<int> &vector, std::deque<int> &deque) {
    for (int i = 1; i < argc; i++) {
        std::string str(argv[i]);
        std::stringstream ss(str);
        int nb;

        ss >> nb;
        if (nb < 0 || nb > INT_MAX)
            throw std::runtime_error("Only integer numbers are allowed");
        if (std::find(vector.begin(), vector.end(), nb) != vector.end())
            throw std::runtime_error("Duplicated numbers not allowed");
        vector.push_back(nb);
        deque.push_back(nb);
    }
}


int main(int argc, char **argv) {
    try {
        if (argc <= 1)
            throw std::runtime_error("Not enough arguments");
        
        std::vector<int> vector;
        std::deque<int> deque;
        PmergeMe merge;

        fillContainers(argc, argv, vector, deque);
        merge.fordJohnson(vector, deque);
    } catch(const std::exception& e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}
