/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:04:16 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/25 16:28:01 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    /*Fixed q(10);          // q = 10.0
    Fixed w(5.5f);       // w = 5.5
    Fixed e(2);           // e = 2.0

    // Печатаем объекты с использованием оператора <<
    std::cout << "q: " << q << std::endl;   // Ожидаем 10
    std::cout << "w: " << w << std::endl;   // Ожидаем 5.05
    std::cout << "e: " << e << std::endl;   // Ожидаем 2.0

    // Демонстрация арифметических операций
    std::cout << "q + w: " << q + w << std::endl;   // Ожидаем 15.05
    std::cout << "q - e: " << q - e << std::endl;   // Ожидаем 8.0
    std::cout << "w * e: " << w * e << std::endl;   // Ожидаем 10.1
    std::cout << "q / w: " << q / w << std::endl;   // Ожидаем 1.9802 (примерный результат)

    // Демонстрация сравнения объектов
    std::cout << "q > w: " << (q > w) << std::endl;   // Ожидаем 1 (true)
    std::cout << "q >= e: " << (q >= e) << std::endl;  // Ожидаем 1 (true)
    std::cout << "w < q: " << (w < q) << std::endl;    // Ожидаем 1 (true)
    std::cout << "w <= q: " << (w <= q) << std::endl;  // Ожидаем 1 (true)
    std::cout << "q == e: " << (q == e) << std::endl;  // Ожидаем 0 (false)
    std::cout << "w != e: " << (w != e) << std::endl;  // Ожидаем 1 (true)

    // Применение инкремента и декремента
    std::cout << "++q: " << ++q << std::endl;   // Ожидаем 11.0 (q увеличится на 1)
    std::cout << "q++: " << q++ << std::endl;    // Ожидаем 11.0 (старое значение)
    std::cout << "q after q++: " << q << std::endl;  // Ожидаем 12.0 (новое значение после постфиксного инкремента)
    std::cout << "--q: " << --q << std::endl;   // Ожидаем 11.0 (q уменьшится на 1)
    std::cout << "q--: " << q-- << std::endl;    // Ожидаем 11.0 (старое значение)
    std::cout << "q after q--: " << q << std::endl;  // Ожидаем 10.0 (новое значение после постфиксного декремента)

    // Применение min и max
    std::cout << "min(q, w): " << Fixed::min(q, w) << std::endl; // Ожидаем 5.05 (меньшее)
    std::cout << "max(q, w): " << Fixed::max(q, w) << std::endl; // Ожидаем 10.0 (большее)
*/

    return 0;
    }
