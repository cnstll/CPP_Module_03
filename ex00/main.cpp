/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:42:23 by calle             #+#    #+#             */
/*   Updated: 2021/10/12 18:03:02 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
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
	return 0;
}
