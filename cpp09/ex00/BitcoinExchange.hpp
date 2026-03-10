#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

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
		bool	cantloadDatabase(const std::string &filename); 
		void	transInputFile(const std::string &filename); 
};




#endif