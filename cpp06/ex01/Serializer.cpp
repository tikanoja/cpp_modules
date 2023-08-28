/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <ttikanoj@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:45:54 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/28 16:17:35 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serializer(Data* ptr) {
	uintptr_t serial = reinterpret_cast <uintptr_t> (ptr);
	return (serial);
}

Data* Serializer::deserialize(uintptr_t raw) {
	Data* deserial = reinterpret_cast <Data*> (raw);
	return (deserial);
}
