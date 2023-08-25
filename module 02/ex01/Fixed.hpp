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