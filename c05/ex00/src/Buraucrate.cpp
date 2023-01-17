/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Buraucrate.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:51:31 by aptive            #+#    #+#             */
/*   Updated: 2023/01/17 20:48:55 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Buraucrate.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Buraucrate::Buraucrate()
{
	this->_name = "Default";
	this->_grade = 1;
}

Buraucrate::Buraucrate( const Buraucrate & src )
{
	*this = src;
}

Buraucrate::Buraucrate(std::string name, unsigned int grade)
{
	this->_name = name;

	try
	{
		if (grade > 150)
			throw Buraucrate::GradeTooLowException();
		else if (grade < 1)
			throw Buraucrate::GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : Buraucrate " << e.what() << '\n';
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Buraucrate::~Buraucrate()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Buraucrate &				Buraucrate::operator=( Buraucrate const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Buraucrate const & i )
{
	try
	{
		if (i.getGrade() > 150)
			throw Buraucrate::GradeTooLowException();
		else if (i.getGrade() < 1)
			throw Buraucrate::GradeTooHighException();
		o 	<< i.getName()
			<< ", buraucrate grade " << i.getGrade()
			<< std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : Affichage Buraucrate " << e.what() << '\n';
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Buraucrate::incrementation( void )
{
	try
	{
		if (this->_grade - 1 < 1)
			throw Buraucrate::GradeTooHighException();
		else
			this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : Can't increment " << this->_name << " " << e.what() << '\n';
	}

}

void	Buraucrate::decrementation( void )
{
	try
	{
		if (this->_grade + 1 > 150)
			throw Buraucrate::GradeTooLowException();
		else
			this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : Can't increment " << this->_name << " " << e.what() << '\n';
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string	Buraucrate::getName() const
{
	return this->_name;
}
unsigned int			Buraucrate::getGrade() const
{
	return this->_grade;
}



/* ************************************************************************** */
