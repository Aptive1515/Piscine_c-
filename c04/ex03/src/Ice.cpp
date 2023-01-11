/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:21:48 by aptive            #+#    #+#             */
/*   Updated: 2023/01/04 18:07:56 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

// ** ------------------------------- CONSTRUCTOR --------------------------------

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Constructor by default" << std::endl;
}

Ice::Ice( const Ice & src ) : AMateria(src)
{
	std::cout << "Ice Constructor by assign" << std::endl;
}

// ** -------------------------------- DESTRUCTOR --------------------------------

Ice::~Ice()
{
	std::cout << "Ice Destructor by default" << std::endl;
}

// ** --------------------------------- OVERLOAD ---------------------------------

Ice &				Ice::operator=( Ice const & rhs )
{
	this->AMateria::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


// ** --------------------------------- ACCESSOR ---------------------------------




/* ************************************************************************** */
