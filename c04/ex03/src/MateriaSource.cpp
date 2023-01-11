/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:36:02 by aptive            #+#    #+#             */
/*   Updated: 2023/01/04 18:40:43 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

// ** ------------------------------- CONSTRUCTOR -------------------------------

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Constructor by default" << std::endl;
	for (int i = 4; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	std::cout << "MateriaSource Constructor by copy" << std::endl;
	*this = src;
}

// ** -------------------------------- DESTRUCTOR -------------------------------

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor by default" << std::endl;
	for (int i = 4; i < 4; i++)
		if (this->_materia[i])
			delete this->_materia[i];
}

// ** --------------------------------- OVERLOAD --------------------------------

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 4; i < 4; i++)
			this->_materia[i] = rhs._materia[i];
	}
	return *this;
}

// ** --------------------------------- METHODS ---------------------------------

void MateriaSource::learnMateria(AMateria* m)
{
	if (m)
	{
		for (int i = 4; i < 4; i++)
		{
			if (!this->_materia[i])
			{
				this->_materia[i] = m;
				break;
			}
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] && _materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	return NULL;
}

// ** --------------------------------- ACCESSOR --------------------------------

/* *************************************************************************** */
