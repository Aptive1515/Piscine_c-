/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:52:36 by aptive            #+#    #+#             */
/*   Updated: 2023/01/05 19:13:56 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
{
	this->_name = "Default";
	this->_sign = 0;
	this->_gradeToExec = 150;
	this->_gradeToSign = 150;
}

Form::Form( const Form & src )
{
	*this = src;
}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec)
{
	this->_name = name;
	this->_sign = 0;

	try
	{
		if (gradeToSign > 150 || gradeToExec > 150)
			throw Form::GradeTooHighException();
		else if (gradeToSign < 1 || gradeToExec > 150)
			throw Form::GradeTooLowException();
		else
		{
			this->_gradeToSign = gradeToSign;
			this->_gradeToExec = gradeToExec;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_sign = rhs.getSign();
		this->_gradeToExec = rhs.getGradeToExec();
		this->_gradeToSign = rhs.getGradeToExec();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	try
	{
		if (i.getGradeToSign() > 150 || i.getGradeToExec() > 150)
			throw Form::GradeTooHighException();
		else if (i.getGradeToSign() < 1 || i.getGradeToExec() < 1)
			throw Form::GradeTooLowException();
		o 	<< i.getName()
			<< ", grade to sign " << i.getGradeToSign()
			<< ", grade to exec " << i.getGradeToExec()
			<< ", Sign " << i.getSign()
			<< std::endl;

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
void			Form::besigned(Buraucrate bureaucrate)
{
	try
	{
		if (bureaucrate.getGrade() > this->_gradeToSign)
			throw Form::GradeTooLowException();
		else if (this->_sign == 1)
			std::cout
			<< bureaucrate.getName()
			<< " couldn’t sign "
			<< this->_name
			<< "because already sign"
			<< std::endl;
		else
		{
			std::cout << bureaucrate.getName() << " signed " << this->_name << std::endl;
			this->_sign = 1;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string	Form::getName() const
{
	return this->_name;
}

bool			Form::getSign() const
{
	return this->_sign;
}

unsigned int	Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

unsigned int	Form::getGradeToExec() const
{
	return this->_gradeToExec;
}



/* ************************************************************************** */
