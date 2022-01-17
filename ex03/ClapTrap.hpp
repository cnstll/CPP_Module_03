/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:54:18 by calle             #+#    #+#             */
/*   Updated: 2021/10/13 18:05:27 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {

	public:

		ClapTrap( std::string name );
		ClapTrap( std::string name="anonymous", unsigned int hit=10, unsigned int energy=10, unsigned int attack=0 );
		ClapTrap( unsigned int hit, unsigned int attack );
		ClapTrap( unsigned int energy );
		ClapTrap( ClapTrap const &src );
		~ClapTrap( void );

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string	getName( void ) const;
		unsigned int	getAttackDamage( void ) const;
		unsigned int	getEnergyPoints( void ) const;
		unsigned int	getHitPoints( void ) const;
		void	decreaseHitPoints( unsigned int amount  );
		void	increaseHitPoints( unsigned int amount  );
		void 	setName( std::string name);
		void 	setHitPoints( unsigned int hit);
		void 	setEnergyPoints( unsigned int energy);
		void 	setAttackDamage( unsigned int attack);

		ClapTrap	&operator= ( ClapTrap const & rhs );

	private:

		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
};
#endif
