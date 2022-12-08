/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:23:26 by aptive            #+#    #+#             */
/*   Updated: 2022/12/08 17:09:27 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"

// constructeur et destructeur
ClapTrap::ClapTrap(void)
{
	std::cout << "Claptrap Constructor by default called" << std::endl;
	this->_name = "Default";
	this->_hit = 10;
	this->_energy = 10;
	this->_attack = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Claptrap Constructor name called" << std::endl;
	this->_name = name;
	this->_hit = 10;
	this->_energy = 10;
	this->_attack = 0;
}


ClapTrap::ClapTrap( ClapTrap const & src)
{
	std::cout << "Claptrap Constructor name called" << std::endl;
	*this = src;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Claptrap Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs.get_name();
		this->_hit = rhs.get_hit();
		this->_energy = rhs.get_energy();
		this->_attack = rhs.get_attack();

	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap Destructor by default called" << std::endl;
}

// action
void	ClapTrap::attack(const std::string& target)
{
	if (this->get_energy() > 0 && this->get_hit() > 0)
	{
		std::cout << "ClapTrap "
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
		std::cout << "ClapTrap "
			<< this->get_name()
			<< " can't attacks energy missing"
			<<std::endl;
	}
	else if (this->get_hit() <= 0)
	{
		std::cout << "ClapTrap "
			<< this->get_name()
			<< " can't attacks because is dead"
			<<std::endl;
	}

}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->get_hit() > 0)
	{
		std::cout << "ClapTrap "
				<< this->get_name()
				<< " takes "
				<< amount
				<< " damage and losing "
				<< amount
				<< " of life"
				<< std::endl;

		if (this->get_hit() < amount)
		{
			this->set_hit(0);
			std::cout << "ClapTrap "
				<< this->get_name()
				<< " is dead"
				<< std::endl;
		}
		else
			this->set_hit(get_hit() - amount);
	}
	else
	{
		std::cout << "ClapTrap "
			<< this->get_name()
			<< " is already dead"
			<< std::endl;
	}
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->get_hit() < 10 && this->get_hit() > 0 && this->get_energy() > 0)
	{
		std::cout << "ClapTrap "
			<< this->get_name()
			<< " repairs amound "
			<< amount
			<< " of life"
			<< std::endl;
		this->set_energy(this->get_energy() - 1);
		if (this->_hit + amount > 10)
			this->set_hit(10);
		else
			this->set_hit(this->_hit + amount);
	}
	else if (this->get_hit() >= 10)
	{
		std::cout << "ClapTrap "
			<< this->get_name()
			<< " can't repairs, maxlife"
			<< std::endl;
	}
	else if (this->get_hit() <= 10)
	{
		std::cout << "ClapTrap "
			<< this->get_name()
			<< " can't repairs, is already dead"
			<< std::endl;
	}
	else if (this->get_energy() <= 0)
	{
		std::cout << "ClapTrap "
			<< this->get_name()
			<< " can't repairs, energy missing"
			<< std::endl;
	}
}

// setteur
void	ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

void	ClapTrap::set_hit(unsigned int hit)
{
	this->_hit = hit;
}

void	ClapTrap::set_energy(unsigned int energy)
{
	this->_energy = energy;
}

void	ClapTrap::set_attack(unsigned int attack)
{
	this->_attack = attack;
}

// getteur
std::string	ClapTrap::get_name(void) const
{
	return this->_name;
}

unsigned int	ClapTrap::get_hit(void) const
{
	return this->_hit;
}

unsigned int	ClapTrap::get_energy(void) const
{
	return this->_energy;
}

unsigned int	ClapTrap::get_attack(void) const
{
	return this->_attack;
}

// operator

std::ostream &	operator<<(std::ostream & o, ClapTrap const & rhs)
{
	o << "---------------------------------------------" << std::endl;
	o << rhs.get_name() << " life : " << rhs.get_hit() << std::endl;
	o << rhs.get_name() << " Energy : " << rhs.get_energy() << std::endl;
	o << "*********************************************" << std::endl;
	return o;
}
