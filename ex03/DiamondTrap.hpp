/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:44:38 by calle             #+#    #+#             */
/*   Updated: 2021/12/15 19:44:43 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap {

	public:

		DiamondTrap( std::string diamond_name="anonymous_D", unsigned int hit=100, unsigned int energy=50, unsigned int attack=30 );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap( void );

		void	attack( std::string const & target );
		void	whoAmI( void );

		std::string	getName( void );
		void setName( std::string diamond_name);

		DiamondTrap	&operator= ( DiamondTrap const & rhs );

	private:

		std::string	_name;

};
#endif
