/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:25:16 by aptive            #+#    #+#             */
/*   Updated: 2023/01/18 20:04:37 by tdelauna         ###   ########.fr       */
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

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : Form(name, target, 145, 137)
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

void	ShrubberyCreationForm::execute(Buraucrate const& executor) const
{
	try
	{
		if (!getSign())
			throw std::string("{ Form is not signed ! }\n");
		else if (executor.getGrade() > this->getGradeToExec())
			throw Buraucrate::GradeTooLowException();
		else
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
