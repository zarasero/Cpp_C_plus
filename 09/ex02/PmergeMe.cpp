#include "PmergeMe.hpp"
#include <cstdlib>
#include <climits>
#include <cstring>
#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <ctime>


PmergeMe::PmergeMe() {}


PmergeMe::PmergeMe(char** av)
{
    for (int i = 1; av[i]; i++)
    {
        for (int j = 0; av[i][j]; j++)
        {
            if (!std::isdigit(static_cast<unsigned char>(av[i][j])))
                throw std::runtime_error("Error");
        }


        long n = std::strtol(av[i], 0, 10);
        if (n > INT_MAX || n < 0)
            throw std::runtime_error("Error");

        int num = static_cast<int>(n);


        if (std::find(_vector.begin(), _vector.end(), num) != _vector.end())
            throw std::runtime_error("Error");

        _vector.push_back(num);
        _deque.push_back(num);
    }
}


PmergeMe::PmergeMe(const PmergeMe& other)
    : _vector(other._vector), _deque(other._deque) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other)
    {
        _vector = other._vector;
        _deque = other._deque;
    }
    return *this;
}


PmergeMe::~PmergeMe() {}


std::vector<size_t> PmergeMe::jacobsthalNumber(size_t n)
{
    std::vector<size_t> jacob;
    if (n == 0)
        return jacob;

    jacob.push_back(0);
    if (n == 1)
        return jacob;

    jacob.push_back(1);
    while (true)
    {
        size_t next = jacob[jacob.size() - 2] * 2 + jacob[jacob.size() - 1];
        if (next > n)
            break;
        jacob.push_back(next);
    }
    return jacob;
}


void PmergeMe::sortVec(std::vector<int>& vecToSort)
{
    if (vecToSort.size() < 2)
        return;

    bool is_odd = vecToSort.size() % 2;
    int odd_nb = 0;

    std::vector<int> big;
    std::vector<int> small;

    for (std::vector<int>::iterator it = vecToSort.begin(); it != vecToSort.end(); it += 2)
    {
        if (it + 1 == vecToSort.end())
        {
            odd_nb = *it;
            break;
        }
        if (*it < *(it + 1))
        {
            small.push_back(*it);
            big.push_back(*(it + 1));
        }
        else
        {
            big.push_back(*it);
            small.push_back(*(it + 1));
        }
    }

    sortVec(big);

    if (!small.empty())
        big.insert(std::lower_bound(big.begin(), big.end(), small[0]), small[0]);

    std::vector<size_t> jacobNb = jacobsthalNumber(small.size());
    std::vector<char> inserted(small.size(), 0);

    if (!small.empty())
        inserted[0] = 1;

    for (size_t i = 1; i < jacobNb.size(); i++)
    {
        size_t idx = jacobNb[i];
        if (idx < small.size() && !inserted[idx])
        {
            big.insert(std::lower_bound(big.begin(), big.end(), small[idx]), small[idx]);
            inserted[idx] = 1;
        }
    }

    for (size_t i = 0; i < small.size(); i++)
    {
        if (!inserted[i])
            big.insert(std::lower_bound(big.begin(), big.end(), small[i]), small[i]);
    }

    if (is_odd)
        big.insert(std::lower_bound(big.begin(), big.end(), odd_nb), odd_nb);

    vecToSort = big;
}


void PmergeMe::sortDeque(std::deque<int>& deqToSort)
{
    if (deqToSort.size() < 2)
        return;

    bool is_odd = deqToSort.size() % 2;
    int odd_nb = 0;

    std::deque<int> big;
    std::deque<int> small;

    for (std::deque<int>::iterator it = deqToSort.begin(); it != deqToSort.end(); it += 2)
    {
        if (it + 1 == deqToSort.end())
        {
            odd_nb = *it;
            break;
        }
        if (*it < *(it + 1))
        {
            small.push_back(*it);
            big.push_back(*(it + 1));
        }
        else
        {
            big.push_back(*it);
            small.push_back(*(it + 1));
        }
    }

    sortDeque(big);

    if (!small.empty())
        big.insert(std::lower_bound(big.begin(), big.end(), small[0]), small[0]);

    std::vector<size_t> jacobNb = jacobsthalNumber(small.size());
    std::vector<char> inserted(small.size(), 0);

    if (!small.empty())
        inserted[0] = 1;

    for (size_t i = 1; i < jacobNb.size(); i++)
    {
        size_t idx = jacobNb[i];
        if (idx < small.size() && !inserted[idx])
        {
            big.insert(std::lower_bound(big.begin(), big.end(), small[idx]), small[idx]);
            inserted[idx] = 1;
        }
    }

    for (size_t i = 0; i < small.size(); i++)
    {
        if (!inserted[i])
            big.insert(std::lower_bound(big.begin(), big.end(), small[i]), small[i]);
    }

    if (is_odd)
        big.insert(std::lower_bound(big.begin(), big.end(), odd_nb), odd_nb);

    deqToSort = big;
}


void PmergeMe::printContainer(const std::vector<int>& container)
{
    for (size_t i = 0; i < container.size() && i < NUMBER_PRINT; i++)
        std::cout << container[i] << " ";
    if (container.size() > NUMBER_PRINT)
        std::cout << "[...]";
    std::cout << std::endl;
}


void PmergeMe::printTime(double timeVec, double timeDeq)
{
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Time to process a range of " << _vector.size()
              << " elements with std::vector : " << timeVec << " us" << std::endl;
    std::cout << "Time to process a range of " << _deque.size()
              << " elements with std::deque : " << timeDeq << " us" << std::endl;
}


void PmergeMe::sort()
{
    if (_vector.empty())
        throw std::runtime_error("Error");

    std::cout << "Before: ";
    printContainer(_vector);

    struct timespec start, end;

    clock_gettime(CLOCK_MONOTONIC, &start);
    double startVec = start.tv_sec * 1e6 + start.tv_nsec / 1e3;
    sortVec(_vector);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double timeVec = (end.tv_sec * 1e6 + end.tv_nsec / 1e3) - startVec;

    clock_gettime(CLOCK_MONOTONIC, &start);
    double startDeq = start.tv_sec * 1e6 + start.tv_nsec / 1e3;
    sortDeque(_deque);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double timeDeq = (end.tv_sec * 1e6 + end.tv_nsec / 1e3) - startDeq;

    std::cout << "After: ";
    printContainer(_vector);
    printTime(timeVec, timeDeq);
}
