/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:57:35 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/01 09:16:38 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main( void ) {
//     Fixed a;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;
//     std::cout << b << std::endl;
//     //std::cout << Fixed::max( a, b ) << std::endl;
//     return 0;
// }

int main(void) {
    Fixed a(2.5f);
    Fixed b(4.75f);
    Fixed c = a;

    std::cout << "a is " << a << " and b is " << b << " and c is " << c << std::endl;

    std::cout << std::endl << "Comparison" << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= c: " << (a >= c) << std::endl;
    std::cout << "a <= c: " << (a <= c) << std::endl;
    std::cout << "a == c: " << (a == c) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;

    std::cout << std::endl << "Arithmetic" << std::endl;
    std::cout << "a + b: " << (a + b) << std::endl;
    std::cout << "b - a: " << (b - a) << std::endl;
    std::cout << "a * b: " << (a * b) << std::endl;
    std::cout << "b / a: " << (b / a) << std::endl;

    std::cout << std::endl << "Increment & Decrement" << std::endl;
    std::cout << "a++: " << a++ << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "--b: " << --b << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "b--: " << b-- << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << std::endl << "Min & Max" << std::endl;
    Fixed smaller = Fixed::min(a, b);
    const Fixed smallerConst = Fixed::min(a, b);
    Fixed larger = Fixed::max(a, b);
    const Fixed largerConst = Fixed::max(a, b);

    std::cout << "Smaller (non-const): " << smaller << std::endl;
    std::cout << "Smaller (const): " << smallerConst << std::endl;
    std::cout << "Larger (non-const): " << larger << std::endl;
    std::cout << "Larger (const): " << largerConst << std::endl;

    return (0);
}
