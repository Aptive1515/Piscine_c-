/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:40:49 by aptive            #+#    #+#             */
/*   Updated: 2023/01/12 14:46:57 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"
#include "../includes/FragTrap.class.hpp"
#include "../includes/DiamondTrap.class.hpp"

int main(void)
{
	DiamondTrap test_one("GENTIL");
	DiamondTrap test_two(test_one);
	DiamondTrap test_three = test_one;

	std::cout << "test_one" << std::endl;
	std::cout << test_one;

	std::cout << "test_two" << std::endl;
	std::cout << test_two;

	std::cout << "test_three" << std::endl;
	std::cout << test_three;


	test_one.attack("MECHANT");
	test_one.whoAmI();

	return 0;
}
