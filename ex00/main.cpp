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
#include <iostream>

int main( void ) {

	std::cout << "\n----------------------------------\n";
	{
		ClapTrap a ("Jim");
		ClapTrap b( a );
		std::string	target = "The poor and innocent Bob";

		std::cout << std::endl;
		a.attack(target);
		b.takeDamage(3);
		b.beRepaired(2);
		std::cout << std::endl;
	}
	std::cout << "----------------------------------\n";
	return 0;
}
