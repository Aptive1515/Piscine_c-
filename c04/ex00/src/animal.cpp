/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:37:41 by aptive            #+#    #+#             */
/*   Updated: 2023/01/12 18:27:37 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.class.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal(void)
{
	std::cout << "[Animal constructor by default]" << std::endl;
	this->_type = "Default";
}


Animal::Animal(Animal const & src)
{
	std::cout << "Animal Constructor Copy called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "[Animal Destructor by default]" << std::endl;
}
/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal assignement called" << std::endl;

	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Animal const & rhs)
{
	o << "--------------------------------------------------" << std::endl;
	o << "Animal type : " << rhs.getType() << std::endl;
	o << "**************************************************" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	Animal::makeSound(void) const
{
	if (!this->_type.compare("Dog") || !this->_type.compare("Cat"))
		std::cout << this->getType() << " : No sounds !!!" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Animal::getType(void) const
{
	return this->_type;
}

/* ************************************************************************** */
