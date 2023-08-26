/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pshevche <pshevche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:54:49 by pshevche          #+#    #+#             */
/*   Updated: 2023/08/20 16:54:50 by pshevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {

	public:
		Harl( void );
		~Harl( void );
		enum Level { DEBUG, INFO, WARNING, ERROR };
        void setFilterLevel(Level level);
		void complain( std::string level );

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		Level currentFilterLevel;

};

#endif