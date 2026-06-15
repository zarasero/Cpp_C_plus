#include "RPN.hpp"
#include <sstream>
#include <cstdlib>


RPN::RPN() {}

RPN::RPN(const RPN& other) : _stack(other._stack) {}

RPN& RPN::operator=(const RPN& other)
{
    if (this != &other)
        _stack = other._stack;
    return *this;
}

RPN::~RPN() {}

bool RPN::calculate(const std::string& expression)
{
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
        {
            if (!processOperator(token))
                return false;
        }

        else if (isNumber(token))
        {
            _stack.push(std::atoi(token.c_str()));
        }

        else
        {
            std::cerr << "Error" << std::endl;
            return false;
        }
    }

    if (_stack.size() != 1)
    {
        std::cerr << "Error" << std::endl;
        return false;
    }

    std::cout << _stack.top() << std::endl;
    return true;
}

bool RPN::processOperator(const std::string& token)
{
    if (_stack.size() < 2)
    {
        std::cerr << "Error" << std::endl;
        return false;
    }

    int b = _stack.top();
    _stack.pop();
    int a = _stack.top();
    _stack.pop();

    int result = 0;
    if (token == "+")
        result = a + b;
    else if (token == "-")
        result = a - b;
    else if (token == "*")
        result = a * b;
    else if (token == "/")
    {
        if (b == 0)
        {
            std::cerr << "Error" << std::endl;
            return false;
        }
        result = a / b;
    }

    _stack.push(result);
    return true;
}

bool RPN::isNumber(const std::string& token)
{
    for (size_t i = 0; i < token.length(); ++i)
    {
        if (!std::isdigit(token[i]))
            return false;
    }

    int num = std::atoi(token.c_str());
    if (num > 9)
        return false;

    return true;
}
