#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <ctime>

#define NUMBER_PRINT 4

class PmergeMe
{
private:
    std::vector<int> _vector;
    std::deque<int>  _deque;

    void sortVec(std::vector<int>& vecToSort);
    void sortDeque(std::deque<int>& deqToSort);

    std::vector<size_t> jacobsthalNumber(size_t n);

    void printContainer(const std::vector<int>& container);
    void printTime(double timeVec, double timeDeq);

public:

    PmergeMe();
    PmergeMe(char** av);
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void sort();
};

#endif
