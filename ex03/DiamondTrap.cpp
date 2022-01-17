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

DiamondTrap::DiamondTrap( std::string diamond_name, unsigned int hit, unsigned int energy, unsigned int attack )
{
	std::cout << "DiamondTrap - Default constructor called\n";
	DiamondTrap::setName(diamond_name);
	FragTrap::setName(diamond_name+"_clap_name");
	FragTrap::setHitPoints(hit);
	FragTrap::setAttackDamage(attack);
	ScavTrap::setEnergyPoints(energy);
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

std::string	DiamondTrap::getName( void ) {

	return this->_name;
}

void	DiamondTrap::setName( std::string diamond_name) {

	DiamondTrap::_name = diamond_name;
}

void	DiamondTrap::whoAmI( void ){

	std::cout << "[DiamondTrap] Hello friend ! My name is " << DiamondTrap::getName();
	std::cout << " and my clapTrap name is " << FragTrap::getName();
	std::cout << "!\n";
		
}

DiamondTrap	&DiamondTrap::operator= ( DiamondTrap const & rhs ){

	ClapTrap::operator=(rhs);
	return *this;
};