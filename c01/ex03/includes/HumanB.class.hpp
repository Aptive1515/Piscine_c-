/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:25:31 by aptive            #+#    #+#             */
/*   Updated: 2022/11/03 20:50:49 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

class HumanB
{
	public:
				HumanB( void );
				HumanB( std::string name );
				~HumanB( void );
		void	attack( void );
		void	setName( std::string name );
		void	setWeapon( Weapon &weapon );
	std::string	getName( void ) const;

	private:
		Weapon		*_weapon;
		std::string	_name;
};

#endif

