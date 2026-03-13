#include "BitcoinExchange.hpp"
// para ja so guardo os valores de data.csv e preciso de testar, ainda preciso de a partir dai fazer parsing do outro ficheiro e escrever as coisas ja direitinho buscando a informacao no ficheiro.csv
int main(int ac, char **av)
{
    if (ac != 2)
    {

        std::cerr << "Error: could not open file." << std::endl;
        return (1);
    }
    BitcoinExchange e;
    if (!e.cantloadDatabase("data.csv"))
        return (1);
    std::cout << "dataloaded" << std::endl;
    if (e.transInputFile(av[1]))
        return 1;
    return (0);
}