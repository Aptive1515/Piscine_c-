/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:53:35 by aptive            #+#    #+#             */
/*   Updated: 2023/01/17 17:55:25 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scalaire.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Scalaire::Scalaire()
{
	this->_value = "default";
	this->_type = Default;
}

Scalaire::Scalaire( const Scalaire & src )
{
	*this = src;
}

Scalaire::Scalaire (std::string value)
{
	this->_value = value;

	char *end_int;
	char *end_float;

// gestion _char_value;
	if (value.size() == 1 && !std::isdigit(static_cast<int>(value[0])))
	{
		this->_char_value =(value[0]);
		this->_type = Char;
	}
	else
	this->_char_value = static_cast<char>(std::strtol(value.c_str(), &end_int, 10));

// gestion _int_value;
	this->_int_value = static_cast<int>(std::strtol(value.c_str(), &end_int, 10));

// gestion _float_value;
	this->_float_value = static_cast<float>(std::strtof(value.c_str(), &end_float));

// gestion _double_value;
	this->_double_value = static_cast<double>(std::strtod(value.c_str(), NULL));


// getion _type
	if (this->_type == Char)
		this->_type = Char;
	else if (!*end_int)
		this->_type = Int;
	else if (end_float[0] == 'f')
		this->_type = Float;
	else
		this->_type = Double;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Scalaire::~Scalaire()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Scalaire &				Scalaire::operator=( Scalaire const & rhs )
{
	if ( this != &rhs )
	{
		this->_value = rhs.getValue();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Scalaire const & i )
{
	double intpart;

	o << "Type : " << i.getType() << std::endl;
	try
	{
		if (i.getValue().size() > 1 && !std::isdigit(i.getValue()[0]))
			throw Scalaire::Impossible();
		else if (!isprint(i.getCharValue()))
			throw Scalaire::NonDisplayable();
		o << "Char : " << i.getCharValue() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Char : " << e.what() << '\n';
	}
	try
	{

		switch (i.getScalarType())
		{
		case Double:
			if (std::isnan(i.getDoubleValue()))
				throw Scalaire::Impossible();
			break;
		case Float:
			if (std::isnan(i.getDoubleValue()))
				throw Scalaire::Impossible();
			break;

		default:
			break;
		}
		if	(i.getDoubleValue() > MAX || i.getDoubleValue() < MIN)
			throw Scalaire::Impossible();
		o << "Int : " << i.getIntValue() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Int : "<< e.what() << '\n';
	}

	try
	{
		if (!modf( i.getFloatValue() , &intpart) )
		{
			o.precision(1);
			o << std::fixed;
		}
		o << "Float : " << i.getFloatValue() << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		if (!modf( i.getDoubleValue() , &intpart) )
		{
			o.precision(1);
			o << std::fixed;
		}
		o << "Double : "<< i.getDoubleValue() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string		Scalaire::getValue() const
{
	return this->_value;
}

std::string		Scalaire::getType() const
{
	switch (this->_type)
	{
		case Char:
			return "Char";
			break;

		case Int:
			return "Int";
			break;

		case Float:
			return "Float";
			break;

		case Double:
			return "Double";
			break;

		default:
			return "Default";
			break;
	}
}

int		Scalaire::getScalarType() const
{
	return this->_type;
}

int		Scalaire::getIntValue() const
{
	return this->_int_value;
}

char		Scalaire::getCharValue() const
{
	return this->_char_value;
}

float		Scalaire::getFloatValue() const
{
	return this->_float_value;
}

double			Scalaire::getDoubleValue() const
{
	return this->_double_value;
}

/* ************************************************************************** */
