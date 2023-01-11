/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:48:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/06 01:59:07 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Buraucrate.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotonyRequestForm.hpp"
#include "../includes/ShrubberyPardonForm.hpp"

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define END "\033[0m"


int main (void)
{

	std::cout << RED <<"---------------------------------- 1st ----------------------------------" << std::endl;
	Buraucrate	test("Number One", 1);
	Form		*form_presidential = new PresidentialPardonForm("PresidentialPardonForm One", "target One");

	std::cout << test;
	std::cout << *form_presidential;
	form_presidential->besigned(test);
	form_presidential->execute(test);


	std::cout << GREEN <<"---------------------------------- 2th ----------------------------------"  << std::endl;

	Form		*form_pardon = new RobotonyRequestForm("RobotonyRequestForm One", "target One");

	std::cout << test;
	std::cout << *form_pardon;
	form_pardon->besigned(test);
	form_pardon->execute(test);

	std::cout << YELLOW <<"---------------------------------- 3th ----------------------------------"  << std::endl;
	Form		*form_shrubbery = new ShrubberyPardonForm("ShrubberyPardonForm One", "target One");

	std::cout << test;
	std::cout << *form_pardon;
	form_shrubbery->besigned(test);
	form_shrubbery->execute(test);


	delete form_presidential;
	delete form_pardon;
	delete form_shrubbery;
	return 0;
}
