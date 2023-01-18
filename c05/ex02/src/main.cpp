/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:48:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/18 17:44:54 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Buraucrate.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

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
	test.signForm(*form_presidential);
	test.execute_form(*form_presidential);

	std::cout << GREEN <<"---------------------------------- 2th ----------------------------------"  << std::endl;

	Form		*form_pardon = new RobotomyRequestForm("RobotonyRequestForm One", "target One");

	std::cout << test;
	std::cout << *form_pardon;
	test.signForm(*form_pardon);
	// test.execute_form(*form_pardon);
	form_pardon->execute(test);

	std::cout << YELLOW <<"---------------------------------- 3th ----------------------------------"  << std::endl;
	Form		*form_shrubbery = new ShrubberyCreationForm("ShrubberyCreationForm One", "target One");

	std::cout << test;
	std::cout << *form_shrubbery;
	test.signForm(*form_shrubbery);
	test.execute_form(*form_shrubbery);


	delete form_presidential;
	delete form_pardon;
	delete form_shrubbery;
	return 0;
}
