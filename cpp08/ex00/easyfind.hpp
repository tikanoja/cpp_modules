/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:03:03 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/09/06 10:21:08 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <array>

#include <stdexcept>

class NoMatchException : public std::exception {
public:
    const char* what() const throw(){
        return "No match!\0";
    }
};

template <typename T>
void easyfind(T haystack, int needle) {
	typename T::iterator it = std::find(haystack.begin(), haystack.end(), needle);
	if (it != haystack.end())
		std::cout << "Found " << needle << " in position " << std::distance(haystack.begin(), it) << "!" << std::endl;
	else
		throw NoMatchException();
	return ;
}
