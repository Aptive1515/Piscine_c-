/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:40:49 by aptive            #+#    #+#             */
/*   Updated: 2022/12/08 16:44:57 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.class.hpp"

void affiche(ClapTrap *player)
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << player->get_name() << " life : " << player->get_hit() << std::endl;
	std::cout << player->get_name() << " Energy : " << player->get_energy() << std::endl;
	std::cout << "*********************************************" << std::endl;
}

int main(void)
{
	ClapTrap player("PLAYER_ONE");
	ClapTrap player_two(player);
	ClapTrap player_three = player;

	std::cout << "Player" << std::endl;
	std::cout << player;
	std::cout << "Player_two" << std::endl;
	std::cout << player_two;
	std::cout << "Player_three" << std::endl;
	std::cout << player_three;

	player.attack("ENEMY");
	std::cout << player;

	player.takeDamage(5);
		std::cout << player;

	player.beRepaired(10);
		std::cout << player;

	player.takeDamage(12);
		std::cout << player;

	player.beRepaired(10);
	player.attack("ENEMY");
	std::cout << player;

	return 0;
}
