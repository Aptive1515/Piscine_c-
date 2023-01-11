/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:18:43 by aptive            #+#    #+#             */
/*   Updated: 2023/01/06 15:54:50 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <time.h>
#include "../includes/Buraucrate.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("Default", "Default", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form (src)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) : Form(name, target, 5, 25)
{}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
		Form::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	RobotomyRequestForm::execute_form() const
{
	std::cout << "PZZZZZZZ PZZZZZZ PZZZZZ" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << "SUCCESSED" << std::endl << "Congratulation "<< this->_target << " , you've come a step further to greatness !" << std::endl;
	else
		std::cout << "FAILED" << std::endl << "The damages on "<< this->_target <<" are irreversible !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
