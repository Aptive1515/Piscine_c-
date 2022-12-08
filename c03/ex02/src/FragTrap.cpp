/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:04:25 by aptive            #+#    #+#             */
/*   Updated: 2022/12/08 17:46:47 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"
#include "../includes/FragTrap.class.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Constructor by default called" << std::endl;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap( std::string name)
{
	std::cout << "FragTrap Constructor by name called" << std::endl;
	this->_name = name;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap( FragTrap const & src) : ClapTrap(src)
{
	std::cout << "FragTrap Constructor assign called" << std::endl;
	*this = src;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs.get_name();
		this->_hit = rhs.get_hit();
		this->_energy = rhs.get_energy();
		this->_attack = rhs.get_attack();

	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor by default called" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->get_energy() > 0 && this->get_hit() > 0)
	{
		std::cout << "FragTrap "
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
		std::cout << "FragTrap "
			<< this->get_name()
			<< " can't attacks energy missing"
			<<std::endl;
	}
	else if (this->get_hit() <= 0)
	{
		std::cout << "FragTrap "
			<< this->get_name()
			<< " can't attacks because is dead"
			<<std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap "
			<< this->_name
			<< " want a High Fives !!!"
			<< std::endl;
}

std::ostream &	operator<<(std::ostream & o, FragTrap const & rhs)
{
	o << "---------------------------------------------" << std::endl;
	o << rhs.get_name() << " life : " << rhs.get_hit() << std::endl;
	o << rhs.get_name() << " Energy : " << rhs.get_energy() << std::endl;
	o << "*********************************************" << std::endl;
	return o;
}
