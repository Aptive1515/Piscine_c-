/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:40:49 by aptive            #+#    #+#             */
/*   Updated: 2022/12/06 19:27:22 by aptive           ###   ########.fr       */
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


	affiche(&player);

	player.attack("ENEMY");
	affiche(&player);

	player.takeDamage(5);
	affiche(&player);

	player.beRepaired(10);
	affiche(&player);

	player.takeDamage(12);
	affiche(&player);

	player.beRepaired(10);
	player.attack("ENEMY");
	affiche(&player);
	return 0;
}
