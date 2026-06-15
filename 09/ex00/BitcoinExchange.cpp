#include "BitcoinExchange.hpp"
#include <sstream>
#include <algorithm>
#include <cstdlib>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _data(other._data) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
        _data = other._data;
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}


bool BitcoinExchange::loadDatabase(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file " << filename << std::endl;
        return false;
    }

    std::string line;
 
    std::getline(file, line);
    
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date, rateStr;
        

        if (std::getline(iss, date, ',') && std::getline(iss, rateStr))
        {
            trimWhitespace(date);
            trimWhitespace(rateStr);
            
            if (isValidDate(date))
            {
                double rate = std::atof(rateStr.c_str());
                if (rate >= 0)
                    _data[date] = rate;
            }
        }
    }
    return true;
}


void BitcoinExchange::processInputFile(const std::string& filename)
{
    if (_data.empty())
    {
        std::cerr << "Error: no data loaded" << std::endl;
        return;
    }

    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file " << filename << std::endl;
        return;
    }

    std::string line;

    std::getline(file, line);
    
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date, valueStr;
        

        if (std::getline(iss, date, '|') && std::getline(iss, valueStr))
        {
            trimWhitespace(date);
            trimWhitespace(valueStr);
            
            if (!isValidDate(date))
            {
                std::cerr << "Error: bad input => " << date << std::endl;
                continue;
            }
            
            double value = std::atof(valueStr.c_str());
            if (!isValidValue(value))
                continue;
            
            double rate = getExchangeRate(date);
            if (rate >= 0)
            {
                double result = value * rate;
                std::cout << date << " => " << value << " = " << result << std::endl;
            }
        }
        else
        {
            std::cerr << "Error: bad input => " << line << std::endl;
        }
    }
}


bool BitcoinExchange::isValidDate(const std::string& date)
{
    if (date.length() != 10)
        return false;

    if (date[4] != '-' || date[7] != '-')
        return false;
    

    for (size_t i = 0; i < date.length(); ++i)
    {
        if (i != 4 && i != 7 && !std::isdigit(date[i]))
            return false;
    }
    

    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());
    

    if (year < 2009 || year > 2026)
        return false;
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    

    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
        daysInMonth[1] = 29;
    
    if (day > daysInMonth[month - 1])
        return false;
    
    return true;
}


bool BitcoinExchange::isValidValue(double value)
{
    if (value < 0)
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }
    if (value > 1000)
    {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}


double BitcoinExchange::getExchangeRate(const std::string& date)
{

    std::map<std::string, double>::iterator it = _data.find(date);
    if (it != _data.end())
        return it->second;
    

    it = _data.lower_bound(date);
    if (it != _data.begin())
    {
        --it;
        return it->second;
    }
    

    std::cerr << "Error: no exchange rate available for date " << date << std::endl;
    return -1;
}


void BitcoinExchange::trimWhitespace(std::string& str)
{

    size_t start = str.find_first_not_of(" \t\n\r");
    if (start != std::string::npos)
        str.erase(0, start);
    else
        str.clear();
    

    size_t end = str.find_last_not_of(" \t\n\r");
    if (end != std::string::npos)
        str.erase(end + 1);
}