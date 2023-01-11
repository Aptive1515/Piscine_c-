/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:28:42 by aptive            #+#    #+#             */
/*   Updated: 2023/01/04 18:10:18 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

// ** ------------------------------- CONSTRUCTOR --------------------------------

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Cure Constructor by default" << std::endl;
}

Cure::Cure( const Cure & src ) : AMateria(src)
{
	std::cout << "Cure Constructor by assign" << std::endl;
}

// ** -------------------------------- DESTRUCTOR --------------------------------

Cure::~Cure()
{
	std::cout << "Cure Destructor by default" << std::endl;
}

// ** --------------------------------- OVERLOAD ---------------------------------

Cure &				Cure::operator=( Cure const & rhs )
{
	this->AMateria::operator=(rhs);
	return *this;
}

// ** --------------------------------- METHODS ----------------------------------

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

// ** --------------------------------- ACCESSOR ---------------------------------


/* ************************************************************************** */
