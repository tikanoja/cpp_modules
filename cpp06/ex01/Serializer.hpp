/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:45:51 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/28 15:54:37 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>
#include "Data.hpp"

//reinterpret_cast used to cast a pointer of data type into a pointer of another data type
class Serializer {
	private:
		//make cons/destructors and such
	
	public:
		static uintptr_t serializer(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	
};

#endif
