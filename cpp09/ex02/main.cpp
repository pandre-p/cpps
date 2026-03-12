#include "PmergerMe.hpp"
int is_valid_positive_int(const char *str)
{
    int i = 0;
    if (!str || str[0] == '\0')
        return 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return 0;
        i++;
    }
    long value = atol(str);
    if (value <= 0 || value > INT_MAX)
        return 0;
    return 1;
}
int parsing(int ac, char **av)
{
    int i = 1;
    
    while (i < ac)
    {
        if (is_valid_positive_int(av[i]) < 0)
            return(1);
        i++;
    }
    return(0);
}

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Error:No arguments" << std::endl;
        return (1);
    }
    if (parsing(ac, av))
    {
        std::cerr << "Error" << std::endl;
        return (1);
    }
    
    //dividir em pares
    //ordenar os pares
    //maiores para a direita, menores para a esquerda
    //inserir os menores elementos na sequencia ordenada
    //guardar o straggler
}