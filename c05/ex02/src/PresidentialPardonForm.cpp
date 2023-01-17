/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:26:28 by aptive            #+#    #+#             */
/*   Updated: 2023/01/17 21:23:05 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Buraucrate.hpp"
#include "../includes/Form.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("Default","Default",5, 25)
{}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form (src)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string const name, std::string target) : Form(name, target, 5, 25)
{}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
		Form::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	PresidentialPardonForm::execute_form() const
{
	std::cout << this->Form::getTarget() << " have been forgiveness by the President Zaphod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
