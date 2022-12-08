/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:40:49 by aptive            #+#    #+#             */
/*   Updated: 2022/12/08 17:33:48 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"
#include "../includes/ScavTrap.class.hpp"

int main(void)
{
	ScavTrap test_one("GENTIL");
	ScavTrap test_two(test_one);
	ScavTrap test_three = test_one;

	std::cout << test_one;

	std::cout << test_two;

	std::cout << test_three;

	test_one.attack("MECHANT");
	test_one.guardGate();

	return 0;
}
