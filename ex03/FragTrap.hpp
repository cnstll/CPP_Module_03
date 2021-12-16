/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:44:54 by calle             #+#    #+#             */
/*   Updated: 2021/12/15 19:44:56 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap{

	public:

		FragTrap( std::string name="anonymous", unsigned int hit=100, unsigned int energy=100, unsigned int attack=30 );
		//FragTrap( std::string name="anonymous", unsigned int hit=100, unsigned int attack=30 );
		//FragTrap(  unsigned int hit=100, unsigned int attack=30 );
		FragTrap( FragTrap const & src );
		~FragTrap( void );

		void	attack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		void	highFivesGuys(void);
		void 	setName( std::string name);
		void 	setHitPoints( unsigned int hit);
		void 	setAttackDamage( unsigned int attack);
		FragTrap	&operator= ( FragTrap const & rhs );

};
#endif
