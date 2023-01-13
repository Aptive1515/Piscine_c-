/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:37:41 by aptive            #+#    #+#             */
/*   Updated: 2022/12/09 00:53:48 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal(void)
{
	std::cout << "[WrongAnimal constructor by default]" << std::endl;
	this->_type = "Default";
}


WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal Constructor Copy called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal Destructor by default]" << std::endl;
}
/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal assignement called" << std::endl;

	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, WrongAnimal const & rhs)
{
	o << "--------------------------------------------------" << std::endl;
	o << "WrongAnimal type : " << rhs.getType() << std::endl;
	o << "**************************************************" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	WrongAnimal::makeSound(void) const
{
	if (this->_type.compare("WrongCat"))
		std::cout << this->getType() << " : Wrong No sounds !!!" << std::endl;

}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

/* ************************************************************************** */
