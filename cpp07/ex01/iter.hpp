/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:42:52 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/31 17:29:59 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template <typename T>
void printer(T arg) {
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

#endif
