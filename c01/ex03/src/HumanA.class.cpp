/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:21:12 by aptive            #+#    #+#             */
/*   Updated: 2022/11/03 20:38:47 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _weapon(weapon)
{
	this->_name = name;
	weapon = weapon;
}

HumanA::~HumanA( void )
{
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

void	HumanA::setName( std::string name )
{
	this->_name = name;
}

std::string	HumanA::getName( void ) const
{
	return (this->_name);
}
