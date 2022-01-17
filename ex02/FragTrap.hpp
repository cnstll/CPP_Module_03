/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:43:45 by calle             #+#    #+#             */
/*   Updated: 2021/12/15 19:43:47 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap{

	public:

		FragTrap(  std::string name="anonymous", unsigned int hit=100, unsigned int energy=100, unsigned int attack=30 );
		FragTrap( FragTrap const & src );
		~FragTrap( void );

		void	attack( std::string const & target );

		void	highFivesGuys(void);
		FragTrap	&operator= ( FragTrap const & rhs );

};
#endif
