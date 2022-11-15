/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:00:03 by aptive            #+#    #+#             */
/*   Updated: 2022/11/03 20:39:46 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

class HumanA
{
	public:
				HumanA( std::string name, Weapon& weapon );
				~HumanA( void );
		void	attack( void );
		void	setName( std::string name );
	std::string	getName( void ) const;

	private:
		Weapon		&_weapon;
		std::string	_name;
};

#endif
