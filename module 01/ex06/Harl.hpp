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