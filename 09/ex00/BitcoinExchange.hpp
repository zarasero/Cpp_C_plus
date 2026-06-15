#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <fstream>
#include <iostream>

class BitcoinExchange
{
private:
    std::map<std::string, double> _data;


    bool isValidDate(const std::string& date);
    bool isValidValue(double value);
    double getExchangeRate(const std::string& date);
    void trimWhitespace(std::string& str);

public:

    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);
    ~BitcoinExchange();


    bool loadDatabase(const std::string& filename);
    void processInputFile(const std::string& filename);
};

#endif