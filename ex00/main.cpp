/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:42:23 by calle             #+#    #+#             */
/*   Updated: 2021/12/15 13:44:36 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>

int main( void ) {

	//ClapTrap a( "Jim" );
	ClapTrap a;
	ClapTrap b( a );
	std::string	target = "The poor and innocent Bob";

	a.attack(target);
	b.takeDamage(3);
	b.beRepaired(2);
	return 0;
}
