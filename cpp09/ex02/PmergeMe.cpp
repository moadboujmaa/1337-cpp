/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:00:56 by mboujama          #+#    #+#             */
/*   Updated: 2025/10/10 11:45:06 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {
    *this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {
    }
    return *this;
}

PmergeMe::~PmergeMe() {}


void PmergeMe::fordJohnson(std::vector<int>& vec, std::deque<int>& deque) {
    clock_t start, end;
    

    printContainer(vec, "Before");
    start = clock();
    sortVector(vec);
    end = clock();
    setVectorDuration(end - start);
    printContainer(vec, "After");
    std::cout << vectorDuration << std::endl;

    start = clock();
    sortDeque(deque);
    end = clock();
    setDequeDuration(end - start);
    std::cout << dequeDuration << std::endl;

}

std::vector<int> generateJacobsthalSequence(int limit) {
    std::vector<int> jacob;
    
    if (limit <= 0) return jacob;

    jacob.push_back(0);
    if (limit == 1) return jacob;
    
    jacob.push_back(1);
    
    for (int i = 2; ; ++i) {
        int next = jacob[i - 1] + 2 * jacob[i - 2];
        if (next > limit) break;
        jacob.push_back(next);
    }
    
    return jacob;
}

void PmergeMe::sortVector(std::vector<int>& vec) {
    std::vector<int> main;
    std::vector<int> pend;

    if (vec.size() <= 2)
        return ;

    sortPairs(vec);

    for (unsigned int i = 0, j = 1; i < vec.size() && j < vec.size(); i += 2, j += 2) {
        main.push_back(vec.at(i));
        pend.push_back(vec.at(j));
    }
    if (vec.size() % 2 != 0)
        pend.push_back(vec.at(vec.size() - 1));

    sortVector(main);

    std::vector<int> jacob = generateJacobsthalSequence(pend.size());

    for (unsigned int i = 0; i < jacob.size(); i++) {
        if ((unsigned int)jacob.at(i) >= pend.size())
            break;
        binary_insert(main, pend.at(jacob.at(i)));
        pend.erase(pend.begin() + jacob.at(i));
    }
    for (unsigned int i = 0; i < pend.size(); i++) {
        binary_insert(main, pend.at(i));
    }
    vec = main;
}

void PmergeMe::sortDeque(std::deque<int>& deque) {
    std::deque<int> main;
    std::deque<int> pend;

    if (deque.size() <= 2)
        return ;

    sortPairs(deque);

    for (unsigned int i = 0, j = 1; i < deque.size() && j < deque.size(); i += 2, j += 2) {
        main.push_back(deque.at(i));
        pend.push_back(deque.at(j));
    }
    if (deque.size() % 2 != 0)
        pend.push_back(deque.at(deque.size() - 1));

    sortDeque(main);

    std::vector<int> jacob = generateJacobsthalSequence(pend.size());

    for (unsigned int i = 0; i < jacob.size(); i++) {
        if ((unsigned int)jacob.at(i) >= pend.size())
            break;
        binary_insert(main, pend.at(jacob.at(i)));
        pend.erase(pend.begin() + jacob.at(i));
    }
    for (unsigned int i = 0; i < pend.size(); i++) {
        binary_insert(main, pend.at(i));
    }

    deque = main;
}
