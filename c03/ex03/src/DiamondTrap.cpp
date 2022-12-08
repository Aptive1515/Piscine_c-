/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:04:25 by aptive            #+#    #+#             */
/*   Updated: 2022/12/08 17:35:04 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"
#include "../includes/ScavTrap.class.hpp"
#include "../includes/FragTrap.class.hpp"
#include "../includes/DiamondTrap.class.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Constructor by default called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name)
{
	std::cout << "DiamondTrap Constructor by name called" << std::endl;
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hit = FragTrap::_hit;
	this->_energy = ScavTrap::_energy;
	this->_attack = ScavTrap::_attack;


}

DiamondTrap::DiamondTrap( DiamondTrap const & src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap Constructor Copy called" << std::endl;
	*this = src;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;

	if (this != &rhs)
	{
		ClapTrap::_name = rhs.ClapTrap::_name;
		this->_name = rhs._name;
		this->_hit = rhs.FragTrap::_hit;
		this->_energy = rhs._energy;
		this->_attack = rhs._attack;
	}
	return *this;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << GREEN << "name : " << this->DiamondTrap::get_name() << std::endl;
	std::cout<< "name claptrap : " << this->ClapTrap::get_name() <<END << std::endl;
}

std::string		DiamondTrap::get_name(void) const
{
	return this->_name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap Destructor by default called]" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, DiamondTrap const & rhs)
{
	o << RED;
	o << "---------------------------------------------" << std::endl;
	o << rhs.DiamondTrap::get_name() << " life : " << rhs.get_hit() << std::endl;
	o << rhs.ClapTrap::get_name() << " Energy : " << rhs.get_energy() << std::endl;
	o << rhs.get_name() << " attack : " << rhs.get_attack() << std::endl;
	o << "*********************************************" << std::endl;
	o << END;
	return o;
}
