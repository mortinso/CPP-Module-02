/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:47:40 by mortins-          #+#    #+#             */
/*   Updated: 2024/01/19 15:40:58 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <iostream>

int main( void ) {

	Fixed a (6);
	Fixed b (6.97f);

	// if (a > b)
	// 	std::cout << "a is larger than b" << std::endl;
	// if (a >= b)
	// 	std::cout << "a is larger than or equal to b" << std::endl;
	// if (a < b)
	// 	std::cout << "a is smaller than b" << std::endl;
	// if (a <= b)
	// 	std::cout << "a is smaller than or equal to b" << std::endl;
	// if (a == b)
	// 	std::cout << "a is equal to b" << std::endl;
	// if (a != b)
	// 	std::cout << "a is different than b" << std::endl;
	Fixed c(a + b);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;

	// std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}