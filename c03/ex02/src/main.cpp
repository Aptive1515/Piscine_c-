/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:40:49 by aptive            #+#    #+#             */
/*   Updated: 2022/12/08 17:48:59 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"
#include "../includes/FragTrap.class.hpp"

int main(void)
{
	FragTrap test_one("GENTIL");
	FragTrap test_two(test_one);
	FragTrap test_three = test_one;

	std::cout << test_one;

	std::cout << test_two;

	std::cout << test_three;

	test_one.attack("MECHANT");
	test_one.highFivesGuys();

	return 0;
}
