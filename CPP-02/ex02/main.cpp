/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 03:25:53 by albillie          #+#    #+#             */
/*   Updated: 2025/02/12 17:14:19 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int	main(void)
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << "a : " << a << std::endl;
// 	std::cout << "++a : " << ++a << std::endl;
// 	std::cout << "a : " << a << std::endl;
// 	std::cout << "--a : " << --a << std::endl;
// 	std::cout << "--a : " << --a << std::endl;
// 	std::cout << "a++ : " << a++ << std::endl;
// 	std::cout << "a : " << a << std::endl;
// 	std::cout << "a + 3.10f: " << a + 3.10f << std::endl;
// 	std::cout << "b : " << b << std::endl;
// 	std::cout << "max a,b : " << Fixed::max(a, b) << std::endl;
// 	a = 2;
// 	std::cout << "Changed a value to 2" << std::endl;
// 	std::cout << "min a,b : " << Fixed::min(a, b) << std::endl;
// 	std::cout << "a : " << a << std::endl;
// 	std::cout << "b : " << b << std::endl;
// 	std::cout << "a * b : " << a * b << std::endl;
// 	std::cout << "a / b : " << a / b << std::endl;
// 	std::cout << "a + b : " << a + b << std::endl;
// 	std::cout << "a - b : " << a - b << std::endl;
// 	std::cout << "a == b : " << (a == b) << std::endl;
// 	std::cout << "a != b : " << (a != b) << std::endl;
// 	std::cout << "a > b : " << (a > b) << std::endl;
// 	std::cout << "a < b : " << (a < b) << std::endl;
// 	std::cout << "a >= b : " << (a >= b) << std::endl;
// 	std::cout << "a <= b : " << (a <= b) << std::endl;

// 	return (0);
// }

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
