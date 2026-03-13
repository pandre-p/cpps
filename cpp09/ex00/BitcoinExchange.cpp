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
    this->_Exrates[date] = atof(rate.c_str()); 
}
bool parsedate(const std::string &date)
{
    if (date.length() != 10)
		return (0);
	if (date[4] != '-' || date[7] != '-')
		return (0);

	for (size_t i = 0; i < date.length(); ++i)
	{
		if (i != 4 && i != 7 && !isdigit(date[i]))
			return (0);
	}

	int	year = atoi(date.substr(0, 4).c_str());
	int	month = atoi(date.substr(5, 2).c_str());
	int	day = atoi(date.substr(8, 2).c_str());
	
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return (0);

	if (month == 2)
	{
		bool	isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		if (day > (isLeap ? 29 : 28))
			return (0);
	} else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 30)
			return (0);
	}

	return (1);
}
bool parserate(const std::string &rate)
{
    if (rate.length() > 10)
		return (0);
    for (size_t i = 0; i < rate.length(); ++i)
	{
		if (!isdigit(rate[i]))
			return (0);
	}
    float N = atof(rate.c_str());
    if (N > 1000 || N <= 0)
        return (0);
    return (1);
}

bool	BitcoinExchange::cantloadDatabase(const std::string &filename)
{
    std::ifstream file(filename.c_str());
    std::string line;

    if (!file.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return (0);
    }
    std::getline(file, line);
    if (line != "date,exchange_rate")
    {
        std::cout << "Error" << std::endl;
        return (0);
    }
    while (std::getline(file, line))
        setexrate(line);
    file.close();
    return(1);
}

bool parseline(std::string line)
{
    size_t pos = line.find("|");
    if (pos == std::string::npos)
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return 0;
    }
    std::string date = line.substr(0, pos - 1);
    std::string rate = line.substr(pos + 2);
    std::string space = line.substr (pos - 1, pos + 2);
    if (!parsedate(date))
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return 0;
    }
    else if (!parserate(rate))
        return 0;
    return 1;
}

float BitcoinExchange::get_exrate(std::string date, float rate)
{
    std::cout << "     -    " << std::endl;
    std::cout << "a:" <<date << std::endl;
    std::cout << "b:" <<rate << std::endl;
    std::cout << "     -    " << std::endl;
    std::map<std::string, float>::iterator it;

    it = _Exrates.lower_bound(date);

    if (it == _Exrates.end())
        it--;

    else if (it->first != date)
    {
        if (it == _Exrates.begin())
            throw std::runtime_error("No earlier date available");
        it--;
    }

    return (rate * it->second);
}

void BitcoinExchange::transvalues(std::string line)
{
    size_t pos = line.find("|");
    std::string date = line.substr(0, pos - 1);
    std::string rate = line.substr(pos + 2);

    std::cout << date << " => " <<  atof(rate.c_str()) << " = " << get_exrate(date, atof(rate.c_str()))  << std::endl; 
    return ;
}

bool BitcoinExchange::transInputFile(const std::string &filename)
{
    std::cout << "ola" << std::endl;
    std::ifstream file(filename.c_str());
    std::string line;
    if (!file.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return (0);
    }
    std::getline(file, line ); //"date | value"
    if (line != "date | value")
    {
        std::cout << "Error" << std::endl;
        return (0);
    }
    while (std::getline(file, line))
    {
        if (!parseline(line))
        {  
            std::cout << "was wrong" << std::endl;
            continue ;
        }
        else
        {
            std::cout << "transvalues" << std::endl;
            transvalues(line);
        }
    }
    file.close();
    //std::cout << date << std::endl;
    //std::cout << rate << std::endl;
    return(1);
}