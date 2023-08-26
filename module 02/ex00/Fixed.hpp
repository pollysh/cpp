/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:55:04 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/20 16:55:05 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private: 
		static const int fractional_bits = 8;
        int fixed_point_value;

	public:
		Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
		~Fixed();

		int getRawBits(void) const;
        void setRawBits(int const raw);

};

#endif