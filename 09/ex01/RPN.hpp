#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <iostream>

class RPN
{
private:
    std::stack<int> _stack;
    bool isNumber(const std::string& token);
    bool processOperator(const std::string& token);

public:
    RPN();
    RPN(const RPN& other);
    RPN& operator=(const RPN& other);
    ~RPN();
    bool calculate(const std::string& expression);
};

#endif
