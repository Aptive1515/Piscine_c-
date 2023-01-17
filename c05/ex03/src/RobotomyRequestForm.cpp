/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:18:43 by aptive            #+#    #+#             */
/*   Updated: 2023/01/17 21:36:33 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Buraucrate.hpp"
#include "../includes/Form.hpp"


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
	std::cout << "Criiii Criiii Criiii Criiii" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << "SUCCESSED : " << this->Form::getTarget() << " have been Robotomized !" << std::endl;
	else
		std::cout << "FAILED : the operation on " <<  this->Form::getTarget() << " have failed !" <<std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
