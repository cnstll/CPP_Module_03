/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:42:23 by calle             #+#    #+#             */
/*   Updated: 2021/10/13 18:13:34 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

int main( void ) {

	//{
	//	ClapTrap a;
	//	ClapTrap b( a );
	//	std::string	target = "The poor and innocent Bob";

	//	a.attack(target);
	//	b.takeDamage(3);
	//	b.beRepaired(2);
	//}
	//{
	//	
	//	ScavTrap a;
	//	ScavTrap b( a );
	//	ScavTrap c( "Alfred" );
	//	std::string	target = "Unfamous Bob";

	//	c.attack(target);
	//	b.takeDamage(30);
	//	b.beRepaired(20);
	//	b.guardGate();
	//}
	//{
	//	
	//	FragTrap a;
	//	FragTrap b( a );
	//	FragTrap c( "A. Ackbar" );
	//	std::string	target = "Impetulant Bob";

	//	c.attack(target);
	//	b.takeDamage(40);
	//	b.beRepaired(10);
	//	b.highFivesGuys();
	//}
	{
		
		DiamondTrap a;
		DiamondTrap c( "DiamondOven" );
		std::string	target = "Bob Prefect";

		a.whoAmI();
	
		a.takeDamage(40);
		a.beRepaired(10);
		a.highFivesGuys();
		c.whoAmI();
		c.guardGate();
	}
	return 0;
}