/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:40:45 by aptive            #+#    #+#             */
/*   Updated: 2022/11/03 20:35:11 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Weapon.class.hpp"

Weapon::Weapon( void )
{}

Weapon::Weapon( std::string str )
{
	this->_type = str;
}

Weapon::~Weapon( void )
{}

void	Weapon::setType( std::string str)
{
	this->_type = str;
}

std::string&	Weapon::getType( void )
{
	return (this->_type);
}
