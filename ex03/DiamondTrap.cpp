/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:44:01 by calle             #+#    #+#             */
/*   Updated: 2021/12/15 19:44:04 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

//• Name (Parameter of constructor)
//• Claptrap::Name (Parameter of constructor + "_clap_name")
//• Hitpoints (Fragtrap) 100
//• Energy points (Scavtrap) 50
//• Attack damage (Fragtrap) 30
//• attack (Scavtrap)
DiamondTrap::DiamondTrap( std::string diamond_name, unsigned int hit, unsigned int energy, unsigned int attack )
{
	DiamondTrap::setName(diamond_name);
	FragTrap::setName(diamond_name+"_clap_name");
	FragTrap::setHitPoints(hit);
	FragTrap::setAttackDamage(attack);
	ScavTrap::setEnergyPoints(energy);
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

void	DiamondTrap::attack( std::string const & target ){
	ScavTrap::attack(target);
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

std::string	DiamondTrap::getName( void ) {

	return this->_name;
}

void	DiamondTrap::setName( std::string diamond_name) {

	DiamondTrap::_name=diamond_name;
}

void	DiamondTrap::whoAmI( void ){

	std::cout << "Hello friend ! My name is " << DiamondTrap::getName();
	std::cout << " and my clapTrap name is " << FragTrap::getName();
	std::cout << "!\n";
		
}

DiamondTrap	&DiamondTrap::operator= ( DiamondTrap const & rhs ){

	ClapTrap::operator=(rhs);
	return *this;
};