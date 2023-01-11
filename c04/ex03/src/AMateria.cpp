/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:00:44 by aptive            #+#    #+#             */
/*   Updated: 2023/01/04 18:15:28 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"


// ** ------------------------------- CONSTRUCTOR --------------------------------

AMateria::AMateria()
{
	std::cout << "AMateria Constructor by default" << std::endl;
}

AMateria::AMateria( std::string const & type )
{
	this->_type = type;
}

AMateria::AMateria( const AMateria & type )
{
	std::cout << "AMateria Constructor by assign" << std::endl;
	*this = type;
}

// ** -------------------------------- DESTRUCTOR --------------------------------

AMateria::~AMateria()
{}

// ** --------------------------------- OVERLOAD ---------------------------------

AMateria &	AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
		this->_type = rhs.getType();
	return *this;
}

// ** --------------------------------- METHODS ----------------------------------

void AMateria::use(ICharacter& target)
{
	(void)target;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const & AMateria::getType() const
{
	return this->_type;
}


/* ************************************************************************** */
