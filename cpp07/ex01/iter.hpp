/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:42:52 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/31 14:05:18 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template<typename T, typename L, typename A>
void iter(T& arr, L arrlen, void (*func)(A)) {
	for (int i = 0; i < arrlen, i++;) {
		func(arr[i]);
	}
	return ;
}

#endif
