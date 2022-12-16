/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:04:25 by aptive            #+#    #+#             */
/*   Updated: 2022/12/16 17:32:07 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"
#include "../includes/ScavTrap.class.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Constructor by default called" << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap( std::string name)
{
	std::cout << "ScavTrap Constructor by name called" << std::endl;
	this->_name = name;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap( ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "ScavTrap Constructor assign called" << std::endl;
	*this = src;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs.get_name();
		this->_hit = rhs.get_hit();
		this->_energy = rhs.get_energy();
		this->_attack = rhs.get_attack();

	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor by default called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->get_energy() > 0 && this->get_hit() > 0)
	{
		std::cout << "ScavTrap "
			<< this->get_name()
			<< " attacks "
			<< target
			<< ", causing "
			<< this->get_attack()
			<< " points of damage!"
			<< std::endl;
		this->set_energy(this->get_energy() - 1);
	}
	else if (this->get_energy() <= 0)
	{
		std::cout << "ScavTrap "
			<< this->get_name()
			<< " can't attacks energy missing"
			<<std::endl;
	}
	else if (this->get_hit() <= 0)
	{
		std::cout << "ScavTrap "
			<< this->get_name()
			<< " can't attacks because is dead"
			<<std::endl;
	}
}

void		ScavTrap::guardGate()
{
	if (this->get_energy() > 0 && this->get_hit() > 0)
	{
		std::cout << "ScavTrap "
			<< this->get_name()
			<< " Gate Keeper mode is ON "
			<< std::endl;
		this->set_energy(this->get_energy() - 1);
	}
	else if (this->get_energy() <= 0)
	{
		std::cout << "ScavTrap "
			<< this->get_name()
			<< " can't change mode energy missing"
			<<std::endl;
	}
	else if (this->get_hit() <= 0)
	{
		std::cout << "ScavTrap "
			<< this->get_name()
			<< " can't change mode because is dead"
			<<std::endl;
	}
}

std::ostream &	operator<<(std::ostream & o, ScavTrap const & rhs)
{
	o << "---------------------------------------------" << std::endl;
	o << rhs.get_name() << " life : " << rhs.get_hit() << std::endl;
	o << rhs.get_name() << " Energy : " << rhs.get_energy() << std::endl;
	o << "*********************************************" << std::endl;
	return o;
}
