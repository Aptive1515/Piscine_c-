/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:26:28 by aptive            #+#    #+#             */
/*   Updated: 2023/01/18 20:04:25 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Buraucrate.hpp"
#include "../includes/Form.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("Default","Default",25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form (src)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string const name, std::string target) : Form(name, target, 25, 5)
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
void	PresidentialPardonForm::execute(Buraucrate const& executor) const
{
	try
	{
		if (!getSign())
			throw std::string("{ Form is not signed ! }\n");
		else if (executor.getGrade() > this->getGradeToExec())
			throw Buraucrate::GradeTooLowException();
		else
			std::cout << this->Form::getTarget() << " have been forgiveness by the President Zaphod Beeblebrox" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error : Can't execute " << e.what() << '\n';
	}
	catch(const std::string& e)
	{
		std::cerr << e << '\n';
	}

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
