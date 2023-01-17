/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:25:16 by aptive            #+#    #+#             */
/*   Updated: 2023/01/17 21:37:46 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Buraucrate.hpp"
#include "../includes/Form.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Default", "Default", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form (src)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : Form(name, target, 5, 25)
{}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
		Form::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	ShrubberyCreationForm::execute_form() const
{
	std::ofstream	ofs;

	ofs.open((this->Form::getTarget() + "_shrubbery").c_str(), std::ofstream::out);

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
