#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed()
	: fixed_point_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		this->fixed_point_value = other.getRawBits();
	}
	return *this;
}

void Fixed::setRawBits(const int fixed_point_value) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_value = fixed_point_value;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point_value;
}