//fazer parsing extra para verificar se começa com data |value
    //linhas seguintes devem ser YYYY-MM-DD | numero
    //Data válida
    //Formato: YYYY-MM-DD
    //Ano válido
    //Mês 01–12
    //Dia válido para o mês
    //Error: bad input => linha_inteira
    // processar linhas aqui
    //Valor válido
    //Tem de ser número
    //Não pode ser negativo
    //Não pode ser maior que 1000
    //Erros:
    //Error: not a positive number.
    //Error: too large a number
    //std::cout << date << " => " << value << " = " << result << std::endl;
#include "BitcoinExchange.hpp"
    
BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _Exrates(other._Exrates) {}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		_Exrates = other._Exrates;

	return (*this);
}
void BitcoinExchange::setexrate(std::string line)
{
    size_t pos = line.find(",");
    std::string date = line.substr(0, pos);
    std::string rate = line.substr(pos + 1);
    this->_Exrates[date] = std::atof(rate.c_str()); 
}
bool	BitcoinExchange::cantloadDatabase(const std::string &filename)
{
    std::ifstream file(filename);
    std::string line;

    if (!file.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return (0);
    }
    if (std::getline(file, line) != "date | value")
    {
        std::cout << "Error" << std::endl;
        return (0);
    }
    while (std::getline(file, line))
    {
        setexrate(line);
        std::cout << line << std::endl;
    }
    file.close();
    return(1);
}