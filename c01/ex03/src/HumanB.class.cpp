/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:38:03 by aptive            #+#    #+#             */
/*   Updated: 2022/12/05 16:13:10 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.class.hpp"
#include "../includes/HumanB.class.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	// _name = name;
}

HumanB::~HumanB( void )
{}

void	HumanB::attack( void )
{

	std::cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setName( std::string name )
{
	this->_name = name;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}

std::string	HumanB::getName( void ) const
{
	return (this->_name);
}
