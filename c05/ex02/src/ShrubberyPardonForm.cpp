/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:25:16 by aptive            #+#    #+#             */
/*   Updated: 2023/01/06 02:03:28 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyPardonForm.hpp"
#include "../includes/Buraucrate.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyPardonForm::ShrubberyPardonForm() : Form("Default", "Default", 145, 137)
{}

ShrubberyPardonForm::ShrubberyPardonForm( const ShrubberyPardonForm & src ) : Form (src)
{}

ShrubberyPardonForm::ShrubberyPardonForm(std::string name, std::string target) : Form(name, target, 5, 25)
{}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyPardonForm::~ShrubberyPardonForm()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyPardonForm &	ShrubberyPardonForm::operator=( ShrubberyPardonForm const & rhs )
{
	if ( this != &rhs )
		Form::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	ShrubberyPardonForm::execute_form() const
{
	std::ofstream	ofs;

	ofs.open((getTarget() + "_shrubbery").c_str(), std::ofstream::out);

	if (!ofs.is_open())
		return ;

    ofs << "                     / \\" << std::endl;
    ofs << "                    /   \\" << std::endl;
    ofs << "                   /     \\ " << std::endl;
	ofs << "                  /       \\" << std::endl;
	ofs << "                 /         \\" << std::endl;
	ofs << "                /___________\\" << std::endl;
	ofs << "                      ||" << std::endl;

	ofs.close();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
