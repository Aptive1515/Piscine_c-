/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:48:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/06 16:38:45 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Buraucrate.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Intern.hpp"

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define END "\033[0m"


int main (void)
{
	Buraucrate	test("Number One", 1);
	Intern		chams;

	std::cout << RED <<"---------------------------------- 1st ----------------------------------" << std::endl;
	Form* form_robotomy = chams.makeForm("robotomy request", "Moi");

	try
	{
		if (!form_robotomy)
			throw std::string("The Form do not exist !\n");
		else
		{
			std::cout << *form_robotomy;
			form_robotomy->besigned(test);
			form_robotomy->execute(test);
		}
	}
	catch(const std::string except)
	{
		std::cout << except;
	}
	std::cout << END;

	std::cout << YELLOW <<"---------------------------------- 1st ----------------------------------" << std::endl;

	Form *form_fake = chams.makeForm("fake", "Moi");

	try
	{
		if (!form_fake)
			throw std::string("The Form do not exist !\n");
		else
		{
			std::cout << *form_fake;
			form_fake->besigned(test);
			form_fake->execute(test);
		}
	}
	catch(const std::string except)
	{
		std::cout << except;
	}

	std::cout << END;

	// form_fake->execute(test);

	delete form_fake;
	delete form_robotomy;
	return 0;
}
