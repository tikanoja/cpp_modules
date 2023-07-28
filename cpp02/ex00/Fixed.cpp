/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:57:42 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/28 09:21:27 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_value = 0;
    return ;
}

Fixed::Fixed(const Fixed &f){
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed& Fixed::operator=(const Fixed& f){
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point_value = f.getRawBits();
    return (*this);
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->fixed_point_value);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point_value = raw;
    return ;
}
