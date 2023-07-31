/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:57:42 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/30 17:11:09 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->fixed_point_value = 0;
    return ;
}

Fixed::Fixed(const int i){
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point_value = i << this->fractional_bits;
    return ;
}

Fixed::Fixed(const float num){
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point_value = std::roundf(num * (1 << this->fractional_bits));
    return ;
}

Fixed::Fixed(const Fixed &f){
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
    return ;
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

float Fixed::toFloat(void) const{
    return ((float)this->fixed_point_value / (float)(1 << this->fractional_bits));
}

int Fixed::toInt(void) const{
    return (this->fixed_point_value >> this->fractional_bits);
}

std::ostream& operator<<(std::ostream &output, const Fixed &f){
    output << f.toFloat();
    return (output);
}

bool Fixed::operator>(const Fixed& f){
    return (this->toFloat() > f.toFloat());
}

bool Fixed::operator<(const Fixed& f){
    return (this->toFloat() < f.toFloat());
}

bool Fixed::operator>=(const Fixed& f){
    return (this->toFloat() >= f.toFloat());
}

bool Fixed::operator<=(const Fixed& f){
    return (this->toFloat() <= f.toFloat());
}

bool Fixed::operator==(const Fixed& f){
    return (this->toFloat() == f.toFloat());
}

bool Fixed::operator!=(const Fixed& f){
    return (this->toFloat() != f.toFloat());
}

Fixed Fixed::operator+(const Fixed& f){
    return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(const Fixed& f){
    return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator*(const Fixed& f){
    return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/(const Fixed& f){
    return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed& Fixed::operator++(void){
    this->fixed_point_value++;
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed temp(*this);
    ++(*this);
    return (temp);
}

Fixed& Fixed::operator--(void){
    this->fixed_point_value--;
    return (*this);
}

Fixed Fixed::operator--(int){
    Fixed temp(*this);
    --(*this);
    return (temp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
    if (a.toFloat() < b.toFloat())
        return (a);
    else
        return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
    if (a.toFloat() < b.toFloat())
        return (a);
    else
        return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
    if (a.toFloat() > b.toFloat())
        return (a);
    else
        return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    if (a.toFloat() > b.toFloat())
        return (a);
    else
        return (b);
}
