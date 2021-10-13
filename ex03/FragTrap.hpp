#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap{

	public:

		FragTrap(  std::string name="anonymous", unsigned int hit=100, unsigned int energy=100, unsigned int attack=30 );
		FragTrap(  unsigned int hit=100, unsigned int attack=30 );
		FragTrap( FragTrap const & src );
		~FragTrap( void );

		void	attack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		void	highFivesGuys(void);
		FragTrap	&operator= ( FragTrap const & rhs );

};
#endif
