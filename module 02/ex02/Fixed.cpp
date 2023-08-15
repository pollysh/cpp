#include "Fixed.hpp"
#include <iostream>
#include <cmath> 

Fixed::Fixed() : fixed_point_value(0) {
}

Fixed::Fixed(const int value)
    : fixed_point_value(value << fractional_bits) {
}

Fixed::Fixed(const float value)
    : fixed_point_value(static_cast<int>(roundf(value * (1 << fractional_bits)))) {
}

Fixed::Fixed(const Fixed& other) {
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        this->fixed_point_value = other.getRawBits();
    }
    return *this;
}

bool Fixed::operator>(const Fixed &rhs) const {
    return this->fixed_point_value > rhs.fixed_point_value;
}

bool Fixed::operator<(const Fixed &rhs) const {
    return this->fixed_point_value < rhs.fixed_point_value;
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return this->fixed_point_value >= rhs.fixed_point_value;
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return this->fixed_point_value <= rhs.fixed_point_value;
}

bool Fixed::operator==(const Fixed &rhs) const {
    return this->fixed_point_value == rhs.fixed_point_value;
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return this->fixed_point_value != rhs.fixed_point_value;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(fixed_point_value) / (1 << fractional_bits);
}

int Fixed::toInt(void) const {
    return fixed_point_value >> fractional_bits;
}

Fixed Fixed::operator+(const Fixed &rhs) const {
    Fixed result;
    result.fixed_point_value = this->fixed_point_value + rhs.fixed_point_value;
    return result;
}

Fixed Fixed::operator-(const Fixed &rhs) const {
    Fixed result;
    result.fixed_point_value = this->fixed_point_value - rhs.fixed_point_value;
    return result;
}

Fixed Fixed::operator*(const Fixed &rhs) const {
    Fixed result;
    result.fixed_point_value = (this->fixed_point_value * rhs.fixed_point_value) >> Fixed::fractional_bits;
    return result;
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    if (rhs.fixed_point_value == 0) {
        throw std::runtime_error("Division by zero");
    }
    Fixed result;
    result.fixed_point_value = (this->fixed_point_value << Fixed::fractional_bits) / rhs.fixed_point_value;
    return result;
}

Fixed& Fixed::operator++() {
    this->fixed_point_value += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->fixed_point_value += 1;
    return temp;
}

Fixed& Fixed::operator--() {
    this->fixed_point_value -= 1;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this); 
    this->fixed_point_value -= 1;
    return temp;
}

// Return reference to the smallest Fixed
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a.fixed_point_value < b.fixed_point_value) ? a : b;
}

// Return reference to the smallest const Fixed
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a.fixed_point_value < b.fixed_point_value) ? a : b;
}

// Return reference to the greatest Fixed
Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a.fixed_point_value > b.fixed_point_value) ? a : b;
}

// Return reference to the greatest const Fixed
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a.fixed_point_value > b.fixed_point_value) ? a : b;
}


std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

Fixed::~Fixed() {
}
