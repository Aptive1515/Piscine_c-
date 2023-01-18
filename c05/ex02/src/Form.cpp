/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:52:36 by aptive            #+#    #+#             */
/*   Updated: 2023/01/18 15:59:12 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("Default"), _sign(0), _target("Default"), _gradeToSign(150), _gradeToExec(150)
{}

Form::Form( const Form & src ) : _name(src.getName()), _sign(src.getSign()), _target(src.getTarget()), _gradeToSign(src.getGradeToSign()), _gradeToExec(src.getGradeToExec())
{}

Form::Form(std::string name,std::string target,unsigned int gradeToSign, unsigned int gradeToExec) : _name(name),  _sign(0), _target(target), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	try
	{
		if (this->getGradeToSign() > 150 || this->getGradeToExec() > 150)
			throw Form::GradeTooLowException();
		else if (this->getGradeToSign() < 1 || this->getGradeToExec() < 1)
			throw Form::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error Form : " << e.what() << '\n';
	}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	try
	{
		if (i.getGradeToSign() > 150 || i.getGradeToExec() > 150)
			throw Form::GradeTooLowException();
		else if (i.getGradeToSign() < 1 || i.getGradeToExec() < 1)
			throw Form::GradeTooHighException();
		o 	<< i.getName()
			<< ", grade to sign " << i.getGradeToSign()
			<< ", grade to exec " << i.getGradeToExec()
			<< ", Sign " << i.getSign()
			<< std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : Affichage Form "  << e.what() << '\n';
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
		else if (this->getGradeToSign() > 150 || this->getGradeToExec() > 150)
			throw Form::GradeTooHighException();
		else if (this->getGradeToSign() < 1 || this->getGradeToExec() < 1)
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
			this->_sign = 1;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << bureaucrate.getName() << " couldn't sign " <<  this->_name << " because " << e.what() << std::endl;
	}
}

// void	Form::execute(Buraucrate const& executor) const
// {
// 	try
// 	{
// 		if (!getSign())
// 			throw std::string("{ Form is not signed ! }\n");
// 		else if (executor.getGrade() > this->getGradeToExec())
// 			throw Buraucrate::GradeTooLowException();
// 		else
// 			execute_form();
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Error : Can't execute " << e.what() << '\n';
// 	}
// }

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

std::string Form::getTarget () const
{
	return this->_target;
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
