/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:48:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/17 20:52:15 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Buraucrate.hpp"
#include "../includes/Form.hpp"

int main (void)
{
	Buraucrate test("Number One", 0);
	Form form_test("Form One", 1, 1);
	Form test_two = form_test;

	std::cout << test;
	form_test.besigned(test);
	std::cout << form_test;
	std::cout << test_two;

	return 0;
}
