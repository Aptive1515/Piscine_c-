/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:48:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/18 15:53:23 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Buraucrate.hpp"
#include "../includes/Form.hpp"

int main (void)
{
	Buraucrate test("Number One", 151);
	Form form_test("Form One", 1, 1);
	Form test_two = form_test;

	std::cout << test;
	test.signForm(form_test);
	std::cout << form_test;
	std::cout << test_two;

	return 0;
}
