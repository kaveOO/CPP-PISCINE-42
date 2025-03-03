#include "iter.hpp"

void print(char &c)
{
	std::cout << c << std::endl;
}

int main()
{
	char array[5];
	array[0] = 'K';
	array[1] = 'A';
	array[2] = 'V';
	array[3] = 'E';
	array[4] = 'O';


	iter(array, 5, print);

	return (0);
}
