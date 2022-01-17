/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:44:27 by calle             #+#    #+#             */
/*   Updated: 2021/10/13 12:09:10 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap( std::string name, unsigned int hit, unsigned int energy, unsigned int attack )
	: ClapTrap( name, hit, energy, attack ){

	std::cout << "FragTrap - Default constructor called\n";
	return ;
};

FragTrap::FragTrap( FragTrap const & src ){

	std::cout << "FragTrap - Copy constructor called\n";
	*this = src;
	return ;
};

FragTrap::~FragTrap( void ){

	std::cout << "FragTrap - Destructor called\n";
	return;
};

void	FragTrap::attack( std::string const & target ){

	std::cout << "[FragTrap] " << this->getName();
	std::cout << " attacks "<< target;
	std::cout << " causing " << this->getAttackDamage();
	std::cout << " points of damage!\n";
};

void	FragTrap::highFivesGuys(void){

	std::cout << "[FragTrap] " << this->getName();
	std::cout << " says: Do you want to High Fives friend ?\n";
}

FragTrap	&FragTrap::operator= ( FragTrap const & rhs ){

	ClapTrap::operator=(rhs);
	return *this;
};

