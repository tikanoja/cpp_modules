/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:03:03 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/05 09:43:13 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <array>

template <typename T>
void easyfind(T haystack, int needle) {
	T::iterator it = std::find(haystack.begin(), haystack.end(), needle);
	if (it != haystack.end())
		std::cout << "Found " << needle << " in position " << std::distance(haystack.begin(), it) << "!" << std::endl;
	else
		std::cout << "Can't find it..." << std::endl;
	return ;
}
