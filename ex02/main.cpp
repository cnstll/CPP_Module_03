/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:42:23 by calle             #+#    #+#             */
/*   Updated: 2021/10/13 12:05:15 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

int main( void ) {

std::cout << "\n----------------------------------\n";
	{
		ClapTrap a;
		ClapTrap b( a );
		std::string	target = "The poor and innocent Bob";

		a.attack(target);
		b.takeDamage(3);
		b.beRepaired(2);
	}
std::cout << "----------------------------------\n";
	{
		
		ScavTrap a;
		ScavTrap b( a );
		ScavTrap c( "Alfred" );
		std::string	target = "Unfamous Bob";

		c.attack(target);
		b.takeDamage(30);
		b.beRepaired(20);
		b.guardGate();
	}
std::cout << "----------------------------------\n";
	{
		
		FragTrap a;
		FragTrap b( a );
		FragTrap c( "A. Ackbar" );
		std::string	target = "Impetulant Bob";

		c.attack(target);
		b.takeDamage(40);
		b.beRepaired(10);
		c.highFivesGuys();
	}
std::cout << "----------------------------------\n";
	return 0;
}
