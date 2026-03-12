#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <cctype>

class BitcoinExchange
{
    private:
        std::map<std::string , float> _Exrates;
    public:
        BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange	&operator=(const BitcoinExchange &other);
		
		void setexrate(std::string line);
		float get_exrate(std::string date, float rate);
		bool	cantloadDatabase(const std::string &filename); 
		bool	transInputFile(const std::string &filename);
		void transvalues(std::string line);
};




#endif