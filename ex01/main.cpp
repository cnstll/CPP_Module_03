/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:42:23 by calle             #+#    #+#             */
/*   Updated: 2021/10/12 19:46:10 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int main( void ) {

std::cout << "\n----------------------------------\n";
	{
		ClapTrap a;
		ClapTrap b( a );
		ClapTrap c( "John" );
		std::string	target = "The poor and innocent Bob";

		std::cout << std::endl;
		c.attack(target);
		b.takeDamage(3);
		b.beRepaired(2);
		std::cout << std::endl;
	}
std::cout << "----------------------------------\n";
	{
		
		ScavTrap a("Jim");
		ScavTrap b( a );
		ScavTrap c( "Alfred" );
		std::string	target = "Unfamous Bob";

		std::cout << std::endl;
		c.attack(target);
		b.takeDamage(30);
		b.beRepaired(20);
		b.guardGate();
		a = c;
		a.guardGate();
		std::cout << std::endl;
	}
std::cout << "----------------------------------\n";
	return 0;
}
