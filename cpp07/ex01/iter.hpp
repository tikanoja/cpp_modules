/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:42:52 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/05 12:42:05 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template <typename T>
void printer(T& arg) {
	std::cout << arg << std::endl;
	return ;
}

template <typename T>
void plusone(T& arg) {
	arg++;
	return ;
}

template <typename T>
void iter(T* arr, int arrlen, void (*func)(T& arg)) {
	for (int i = 0; i < arrlen; i++) {
		func(arr[i]);
	}
	return ;
}

template <typename T>
void iter(T* arr, int arrlen, void (*func)(T const & arg)) {
	for (int i = 0; i < arrlen; i++) {
		func(arr[i]);
	}
	return ;
}

#endif
