#include <iostream>
#include <fstream>
#include <string>
int *numbercolector(char *data)
{
	int i = 0;
	int j = 0;
	int *numbers;
	while(data[i])
	{
		if (data[i] > '0' && data[i] < '9')
		{
			numbers[j] = data[i] - 48;
			j++;
		}
		i++;
	}
	numbers[j] = NULL;
	return(numbers);
}
char *operationcolector(char *data)
{
	int i = 0;
	int j = 0;
	char *op;
	while(data[i])
	{
		if (data[i] == '-' || data[i] == '+' || data[i] == '*' || data[i] == '/')
		{
			op[j] = data[i];
			j++;
		}
		i++;
	}
	op[j] = NULL;
	return(op);
}
float calculate(char *data)
{
	char *op;
	int *numbers;

	numbers = numbercolector(data);
	op = operationcolector(data);
}
int isvalid(char *data)
{
	int i = 0;
	int number = 0;
	int sig = 0;
	int space = 0;
	while (data[i])
	{
		if (data[i] == ' ')
			space = 0;
		else if (((data[i] < '0' || data[i] > '9') 
			&& data[i] != '*' 
			&& data[i] != '-' 
			&& data[i] != '+'
			&& data[i] != '/') 
			|| space == 1)
			return (0);
		else
		{
			if ((data[i] > '0' && data[i] < '9'))
				number++;
			if (data[i] == '-' || data[i] == '+' || data[i] == '*' || data[i] == '/')
				sig++;
			space = 1;
		}
		i++;
	}
	if (!(sig + 1 == number))
		return (0);
	return (1);
}
int main(int ac, char **av)
{
	float result ;
	if (ac != 2)
	{
		std::cerr << "Error:Wrong input" << std::endl;
		return 1;
	}
	printf("%s\n", av[1]);
	if (!isvalid(av[1]))
	{
		std::cerr << "Error:Wrong input" << std::endl;
		return 1;
	}
	result = calculate(av[1]);
	std::

}