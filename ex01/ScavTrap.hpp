/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:42:36 by calle             #+#    #+#             */
/*   Updated: 2021/12/15 19:42:38 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {

	public:

		ScavTrap( std::string name="anonymous", unsigned int hit=100, unsigned int energy=50, unsigned int attack=20 );
		ScavTrap( ScavTrap const & src );
		~ScavTrap( void );

		void	attack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		void	guardGate( void );

		ScavTrap	&operator= ( ScavTrap const & rhs );

};
#endif
