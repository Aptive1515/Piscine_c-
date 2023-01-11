/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:30:18 by aptive            #+#    #+#             */
/*   Updated: 2023/01/04 18:23:31 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

// ** ------------------------------- CONSTRUCTOR --------------------------------

Character::Character()
{
	std::cout << "MateriaSource Constructor by default" << std::endl;
	this->_name = "Default";
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

Character::Character( const Character & src )
{
	// *this = src;
	_name = src._name;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = (src._materia[i]) ? src._materia[i]->clone() : NULL;
}


// ** -------------------------------- DESTRUCTOR --------------------------------

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
}


// ** --------------------------------- OVERLOAD ---------------------------------


Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i < 4; i++)
			this->_materia[i] = (rhs._materia[i]) ? rhs._materia[i]->clone() : NULL;
			// this->_materia[i] = rhs._materia[i];
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	//o << "Value = " << i.getValue();
	(void)i;
	return o;
}


// ** --------------------------------- METHODS ----------------------------------

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->_materia[i])
			{
				this->_materia[i] = m;
				break;
			}
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && this->_materia[idx])
		this->_materia[idx]->use(target);
}

// ** --------------------------------- ACCESSOR ---------------------------------


/* ************************************************************************** */
