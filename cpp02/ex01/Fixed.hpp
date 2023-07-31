/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuukka <tuukka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:57:51 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/30 17:03:41 by tuukka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int fixed_point_value;
        static const int fractional_bits;

    public:
        Fixed(void);
        Fixed(const int i);
        Fixed(const float num);
        Fixed(const Fixed &f);
        ~Fixed(void);
        Fixed& operator=(const Fixed& f);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream &output, const Fixed &f);

#endif
