#include "whatever.hpp"
#include <iostream>

int main()
{
	int a = 10;
	int b = 20;

	ft_swap<int>(a, b);

	std::cout << "a -> " << a << std::endl;
	std::cout << "b -> " << b << std::endl;

	return (0);
}
