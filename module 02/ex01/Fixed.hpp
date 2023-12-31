/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:55:30 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/20 16:55:31 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>  
#include <iostream>

class Fixed {
    private:
        int fixed_point_value;
        static const int fractional_bits = 8;

    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed& other);

        Fixed& operator=(const Fixed& other);
        float toFloat(void) const;
        int toInt(void) const;

        int getRawBits() const { return fixed_point_value; }

        friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
        
        ~Fixed();
};

#endif