/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Buraucrate.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:51:31 by aptive            #+#    #+#             */
/*   Updated: 2023/01/18 15:50:52 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Buraucrate.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Buraucrate::Buraucrate() : _name("Default")
{
	this->_grade = 1;
}

Buraucrate::Buraucrate( const Buraucrate & src ) : _name(src.getName()), _grade(src.getGrade())
{}

Buraucrate::Buraucrate(std::string name, unsigned int grade) : _name(name)
{
	try
	{
		if (grade > 150)
			throw Buraucrate::GradeTooHighException();
		else if (grade < 1)
			throw Buraucrate::GradeTooLowException();
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
		*this = rhs;
		// this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Buraucrate const & i )
{
	try
	{
		if (i.getGrade() > 150)
			throw Buraucrate::GradeTooHighException();
		else if (i.getGrade() < 1)
			throw Buraucrate::GradeTooLowException();
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

void	Buraucrate::signForm( Form & formulaire )
{
	try
	{
		if (this->getGrade() > formulaire.getGradeToSign())
			throw Form::GradeTooLowException();
		else if (formulaire.getGradeToSign() > 150 || formulaire.getGradeToExec() > 150)
			throw Form::GradeTooHighException();
		else if (formulaire.getGradeToSign() < 1 || formulaire.getGradeToExec() < 1)
			throw Form::GradeTooLowException();
		else if (formulaire.getSign() == 1)
			std::cout
			<< this->getName()
			<< " couldn’t sign "
			<< formulaire.getName()
			<< "because already sign"
			<< std::endl;
		else
		{
			std::cout << this->getName() << " signed " << formulaire.getName() << std::endl;
			formulaire.besigned(*this);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " <<  formulaire.getName()<< " because " << e.what() << std::endl;
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
