/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:53:35 by aptive            #+#    #+#             */
/*   Updated: 2023/01/12 19:15:22 by tdelauna         ###   ########.fr       */
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



// gestion _int_value;
	this->_int_value = static_cast<int>(std::strtol(value.c_str(), &end_int, 10));

// gestion _int_value;
	if (value.size() == 1 && !std::isdigit(static_cast<int>(value[0])))
	{
		this->_char_value =(value[0]);
		this->_type = Char;
	}
	else
		this->_char_value = static_cast<char>(_int_value);
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

	// try
	// {
	// 	switch (i.getScalarType())
	// 	{
	// 	case Char:
	// 		if (!std::isprint(i.getCharValue()))
	// 			throw Scalaire::NonDisplayable();
	// 		break;

	// 	// case Int:
	// 	// 		throw Scalaire::NonDisplayable();
	// 		// break;

	// 	default:
	// 		if (!std::isnan(i.getCharValue()))
	// 			throw Scalaire::Impossible();
	// 		break;
	// 	}
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "Char : " << e.what() << '\n';
	// }
			o << "Char : " << i.getCharValue() << std::endl;

	try
	{
		o << "Int : " << i.getIntValue() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		modf(i.getFloatValue() , &intpart);
		if (intpart == 0)
			o.precision(1);
		o << std::fixed << "Float : " << i.getFloatValue() << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		modf(i.getDoubleValue() , &intpart);
		if (intpart == 0)
			o.precision(1);
		o << std::fixed << "Double : "<< i.getDoubleValue() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}




	// o << "Double : " << i.getDoubleValue() << std::endl;

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
