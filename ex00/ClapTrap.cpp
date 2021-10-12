/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:56:17 by calle             #+#    #+#             */
/*   Updated: 2021/10/12 18:03:05 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap( void )
	: _name( "anonymous" ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ){

	std::cout << "ClapTrap - Default constructor called\n";
	return ;
};

ClapTrap::ClapTrap( ClapTrap const & src ){

	std::cout << "ClapTrap - Copy constructor called\n";
	*this = src;
	return ;
};

ClapTrap::~ClapTrap( void ){

	std::cout << "ClapTrap - Destructor called\n";
	return;
};

unsigned int	ClapTrap::_getAttackDamage( void ) const{
	
	return this->_attackDamage;
};

unsigned int	ClapTrap::_getEnergyPoints( void ) const{
	
	return this->_energyPoints;
}

unsigned int	ClapTrap::_getHitPoints( void ) const{
	
	return this->_hitPoints;
}

void	ClapTrap::_decreaseHitPoints( unsigned int amount  ){
	
	if ( this->_hitPoints <= amount )
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
}

void	ClapTrap::_increaseHitPoints( unsigned int amount  ){
	
	this->_hitPoints += amount;
}

std::string	ClapTrap::_getName( void ) const{
	
	return this->_name;
}

void	ClapTrap::attack( std::string const & target ){

	std::cout << "ClapTrap " << this->_getName();
	std::cout << " attacks "<< target;
	std::cout << " causing " << this->_getAttackDamage();
	std::cout << " points of damage!\n";
};

void	ClapTrap::takeDamage( unsigned int amount ){

	std::cout << "ClapTrap " << this->_getName();
	std::cout << " took a hit!";
	std::cout << " ClapTrap lost " << amount << " hit points!";
	this->_decreaseHitPoints( amount );
	std::cout << "\n";
	std::cout << "ClapTrap has " << this->_getHitPoints() << " hit points now.";
	std::cout << "\n";
};

void	ClapTrap::beRepaired(unsigned int amount){

	std::cout << "ClapTrap " << this->_getName();
	std::cout << " with " << this->_getHitPoints() << " hit points ";
	std::cout << "is being repaired..";
	this->_increaseHitPoints( amount );
	std::cout << "\n";
	std::cout << "ClapTrap has " << this->_getHitPoints() << " hit points now.";
	std::cout << "\n";
};

ClapTrap	&ClapTrap::operator= ( ClapTrap const & rhs ){

	this->_name = rhs._getName();
	this->_hitPoints = rhs._getHitPoints();
	this->_energyPoints = rhs._getEnergyPoints();
	this->_attackDamage = rhs._getAttackDamage();
	return *this;
};
