/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:42:22 by aptive            #+#    #+#             */
/*   Updated: 2023/01/17 21:39:35 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern( void )
{}

Intern::Intern( Intern const & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
Intern &	Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
		*this = rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
Form*		Intern::makeForm(std::string name_form, std::string name_target)
{
	std::string	tab[3] = {	"shrubbery creation",
							"robotomy request",
							"presidential pardon"};
	int	i(-1);
	while (++i < 3)
		if (!tab[i].compare(name_form))
			break;
	std::cout << "test\n";
	try
	{
		switch (i)
		{
			case 0:
				std::cout << GREEN << "Intern creates Shrubbery form" << END << std::endl;
				return (new ShrubberyCreationForm(name_form, name_target));
			case 1:
				std::cout << GREEN << "Intern creates Robotomy form" << END << std::endl;
				return (new RobotomyRequestForm(name_form, name_target));
			case 2:
				std::cout << GREEN << "Intern creates Presidential pardon form" << END << std::endl;
				return (new PresidentialPardonForm(name_form, name_target));
			case 3:
				throw std::string("Intern cannot find " + name_form + " form !\n");
				break;
		}
	}
	catch (std::string& except)
	{
		std::cout << except;
	}
	return (NULL);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */

