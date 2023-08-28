/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:45:54 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/08/28 20:05:18 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {
	return ;
}

Serializer::~Serializer(void) {
	return ;
}

Serializer::Serializer(Serializer const& other) {
	*this = other;
	return ;
}

Serializer& Serializer::operator=(Serializer const& other) {
	// if (this != &other) {
	// 	//copy possible variables
	// }
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
	uintptr_t serial = reinterpret_cast <uintptr_t> (ptr);
	return (serial);
}

Data* Serializer::deserialize(uintptr_t raw) {
	Data* deserial = reinterpret_cast <Data*> (raw);
	return (deserial);
}
