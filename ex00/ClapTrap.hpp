/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:54:18 by calle             #+#    #+#             */
/*   Updated: 2021/10/12 18:03:06 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {

	public:

		ClapTrap( void );
		ClapTrap( ClapTrap const & src );
		~ClapTrap( void );

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap	&operator= ( ClapTrap const & rhs );

	private:

		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;

		std::string	_getName( void ) const;
		unsigned int	_getAttackDamage( void ) const;
		unsigned int	_getEnergyPoints( void ) const;
		unsigned int	_getHitPoints( void ) const;
		void	_decreaseHitPoints( unsigned int amount  );
		void	_increaseHitPoints( unsigned int amount  );
};
#endif
