/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:45:51 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/28 15:01:28 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <stdint.h>
#include "Data.hpp"

//reinterpret_cast
class Serializer {
	private:
	
	
	public:
		uintptr_t serializer(Data* ptr);
		Data* deserialize(uintptr_t raw);
	
};

#endif