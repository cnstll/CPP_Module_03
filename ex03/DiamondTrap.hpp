#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
//ScavTrap.
//Its attributes and functions will be chosen from either of its parent classes:
//• Name (Parameter of constructor)
//• Claptrap::Name (Parameter of constructor + "_clap_name")
//• Hitpoints (Fragtrap)
//• Energy points (Scavtrap)
//• Attack damage (Fragtrap)
//• attack (Scavtrap)
//It will have the special functions of both.
class DiamondTrap : public ScavTrap, public FragTrap {

	public:

		DiamondTrap( std::string name="anonymous", unsigned int hit=100, unsigned int energy=50, unsigned int attack=20 );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap( void );

		void	attack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		void	whoAmI( void );

		std::string	getName( void );

		DiamondTrap	&operator= ( DiamondTrap const & rhs );

	private:

		std::string	_name;

};
#endif
