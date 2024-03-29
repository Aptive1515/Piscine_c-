/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:05:53 by aptive            #+#    #+#             */
/*   Updated: 2023/01/12 18:25:46 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat constructor by default" << std::endl;
	Animal::_type = "Cat";
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	std::cout << "Cat constructor by copy" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat destructor by copy" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "--------------------------------------------------" << std::endl;
	o << "Animal type : " << i.Animal::getType() << std::endl;
	o << "Cat type : " << i.getType() << std::endl;
	o << "**************************************************" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Cat::makeSound(void) const
{
	std::cout << this->getType() << " : Miaou Miaou !!!" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
