#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private: 
		static const int _nFracBits = 8;
        int _rawBits;

	public:
		Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
		~Fixed();

		int getRawBits(void) const;
        void setRawBits(int const raw);

};

#endif