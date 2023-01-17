/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:05:53 by aptive            #+#    #+#             */
/*   Updated: 2023/01/12 18:26:30 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog constructor by default" << std::endl;
	this->_type = "Dog";
}

Dog::Dog( const Dog & src ) : Animal(src)
{
	std::cout << "Dog constructor by copy" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog destructor by copy" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "--------------------------------------------------" << std::endl;
	o << "Animal type : " << i.Animal::getType() << std::endl;
	o << "Dog type : " << i.getType() << std::endl;
	o << "**************************************************" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Dog::makeSound(void) const
{
	std::cout << this->getType() << " : Whouaf Whouaf !!!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
