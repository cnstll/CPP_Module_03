/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:42:20 by calle             #+#    #+#             */
/*   Updated: 2021/12/15 19:42:23 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap( std::string name, unsigned int hit, unsigned int energy, unsigned int attack )
	: ClapTrap( name, hit, energy, attack ){

	std::cout << "ScavTrap - Default constructor called\n";
	return ;
};

ScavTrap::ScavTrap( ScavTrap const & src ){

	std::cout << "ScavTrap - Copy constructor called\n";
	*this = src;
	return ;
};

ScavTrap::~ScavTrap( void ){

	std::cout << "ScavTrap - Destructor called\n";
	return;
};

void	ScavTrap::attack( std::string const & target ){

	std::cout << "ScavTrap " << this->getName();
	std::cout << " attacks "<< target;
	std::cout << " causing " << this->getAttackDamage();
	std::cout << " points of damage!\n";
};

void	ScavTrap::takeDamage( unsigned int amount ){

	std::cout << "ScavTrap " << this->getName();
	std::cout << " took a hit!";
	std::cout << " ScavTrap lost " << amount << " hit points!";
	this->decreaseHitPoints( amount );
	std::cout << "\n";
	std::cout << "ScavTrap has " << this->getHitPoints() << " hit points left.";
	std::cout << "\n";
};

void	ScavTrap::beRepaired(unsigned int amount){

	std::cout << "ScavTrap " << this->getName();
	std::cout << " with " << this->getHitPoints() << " hit points ";
	std::cout << "is being repaired..";
	this->increaseHitPoints( amount );
	std::cout << "\n";
	std::cout << "ScavTrap has " << this->getHitPoints() << " hit points now.";
	std::cout << "\n";
};

void ScavTrap::guardGate( void ){

	std::cout << "ScavTrap - YOU SHAAALLL NOT PASSSSSS (Gate Keeper Mode Activated)\n";
}

ScavTrap	&ScavTrap::operator= ( ScavTrap const & rhs ){

	//std::cout << "ScavTrap - Assignement overload\n";
	ClapTrap::operator=(rhs);
	return *this;
}

