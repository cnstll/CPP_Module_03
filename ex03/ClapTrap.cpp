/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:56:17 by calle             #+#    #+#             */
/*   Updated: 2021/10/12 18:57:07 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap( std::string name, unsigned int hit, unsigned int energy, unsigned int attack ) 
	: _name( name ), _hitPoints( hit ), _energyPoints( energy ), _attackDamage( attack ){

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

unsigned int	ClapTrap::getAttackDamage( void ) const{
	
	return this->_attackDamage;
};

unsigned int	ClapTrap::getEnergyPoints( void ) const{
	
	return this->_energyPoints;
}

unsigned int	ClapTrap::getHitPoints( void ) const{
	
	return this->_hitPoints;
}

void ClapTrap::setName( std::string name){
	_name = name;
}

void ClapTrap::setHitPoints( unsigned int hit){
	_hitPoints = hit;
}

void ClapTrap::setEnergyPoints( unsigned int energy){
	_energyPoints = energy;
}

void ClapTrap::setAttackDamage( unsigned int attack){
	_attackDamage = attack;
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

std::string	ClapTrap::getName( void ) const{
	
	return this->_name;
}

void	ClapTrap::attack( std::string const & target ){

	std::cout << "[ClapTrap] " << this->getName();
	std::cout << " attacks "<< target;
	std::cout << " causing " << this->getAttackDamage();
	std::cout << " points of damage!\n";
};

void	ClapTrap::takeDamage( unsigned int amount ){

	std::cout << "[ClapTrap] " << this->getName();
	std::cout << " took a hit! ";
	std::cout << this->getName() << " lost " << amount << " hit points! ";
	this->_decreaseHitPoints( amount );
	std::cout << this->getName() << " has "  << this->getHitPoints() << " hit points now.";
	std::cout << "\n";
};

void	ClapTrap::beRepaired(unsigned int amount){

	std::cout << "[ClapTrap] " << this->getName();
	std::cout << " with " << this->getHitPoints() << " hit points ";
	std::cout << "is being repaired... ";
	this->_increaseHitPoints( amount );
	std::cout << this->getName() << " has " << this->getHitPoints() << " hit points now (+" << amount << ").";
	std::cout << "\n";
};

ClapTrap	&ClapTrap::operator= ( ClapTrap const & rhs ){

	if (this == &rhs)
		return *this;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
};
