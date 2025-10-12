/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboujama <mboujama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:00:53 by mboujama          #+#    #+#             */
/*   Updated: 2025/10/11 17:43:14 by mboujama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <vector>
# include <deque>
# include <string>
# include <iostream>
# include <sstream>
# include <algorithm>
# include <climits>
# include <ctime>
# include <ostream>


# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW    "\033[33m"
# define BLUE    "\033[34m"

class PmergeMe {
    private:
        int vectorDuration;
        int dequeDuration;

    public:
        PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);
        ~PmergeMe();

        int getVectorDuration() const {
            return vectorDuration;
        }
        int getDequeDuration() const {
            return dequeDuration;
        }

        void setVectorDuration(int duration) {
            vectorDuration = duration;
        }
        void setDequeDuration(int duration) {
            dequeDuration = duration;
        }
        
        template<typename Cont>
        void sortPairs(Cont& cont) {
            for (unsigned int i = 0, j = 1; i < cont.size() && j < cont.size(); i += 2, j += 2) {
                if (cont.at(i) > cont.at(j)) {
                    unsigned int k = cont.at(i);
                    cont.at(i) = cont.at(j);
                    cont.at(j) = k;
                }
            }
        }

        template<typename Cont>
        void binary_insert(Cont& cont, int value) {
            typename Cont::iterator it = std::lower_bound(cont.begin(), cont.end(), value);
            
            cont.insert(it, value);
        }

        template <typename Cont>
        void printContainer(Cont& cont, std::string status) const {
            std::cout << status + ":\t";
            for (unsigned int i = 0; i < cont.size(); i++) 
                std::cout << cont.at(i) << " ";
            std::cout << std::endl;
        }

        void fordJohnson(std::vector<int>& vec, std::deque<int>& deque);
        std::vector<int> generateJacobsthal(int limit);
        void sortVector(std::vector<int>& vec);
        void sortDeque(std::deque<int>& deque);
        
        std::vector<int> generateJacobsthal(unsigned int n);
        std::vector<int> generateInsertionOrder(unsigned int size);
};
