#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

//• Name (Parameter of constructor)
//• Claptrap::Name (Parameter of constructor + "_clap_name")
//• Hitpoints (Fragtrap)
//• Energy points (Scavtrap)
//• Attack damage (Fragtrap)
//• attack (Scavtrap)
DiamondTrap::DiamondTrap( std::string name, unsigned int hit, unsigned int energy, unsigned int attack )
	: _name(name), FragTrap( hit, attack ), ScavTrap( energy ), ClapTrap(name+"_clap_name"){

	std::cout << "DiamondTrap - Default constructor called\n";
	return ;
};

DiamondTrap::DiamondTrap( DiamondTrap const & src ){

	std::cout << "DiamondTrap - Copy constructor called\n";
	*this = src;
	return ;
};

DiamondTrap::~DiamondTrap( void ){

	std::cout << "DiamondTrap - Destructor called\n";
	return;
};
void	DiamondTrap::attack( unsigned int amount ){
	ScavTrap::attack( unsigned int amount );
}

void	DiamondTrap::takeDamage( unsigned int amount ){

	std::cout << "DiamondTrap " << this->getName();
	std::cout << " took a hit!";
	std::cout << " DiamondTrap lost " << amount << " hit points!";
	this->decreaseHitPoints( amount );
	std::cout << "\n";
	std::cout << "DiamondTrap has " << this->getHitPoints() << " hit points left.";
	std::cout << "\n";
};

void	DiamondTrap::beRepaired(unsigned int amount){

	std::cout << "DiamondTrap " << this->getName();
	std::cout << " with " << this->getHitPoints() << " hit points ";
	std::cout << "is being repaired..";
	this->increaseHitPoints( amount );
	std::cout << "\n";
	std::cout << "DiamondTrap has " << this->getHitPoints() << " hit points now.";
	std::cout << "\n";
};

std::string	ClapTrap::getName( void ) const{

	return this->_name;
}

void	DiamondTrap::whoAmI( void ){

		
}

DiamondTrap	&DiamondTrap::operator= ( DiamondTrap const & rhs ){

	ClapTrap::operator=(rhs);
	return *this;
};

