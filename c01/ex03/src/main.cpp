/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:59:42 by aptive            #+#    #+#             */
/*   Updated: 2022/12/05 16:12:11 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Weapon.class.hpp"
# include "../includes/HumanA.class.hpp"
# include "../includes/HumanB.class.hpp"


int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}

// Implémentez une classe Weapon (arme) qui possède :
// • Un attribut privé type de type string.
// • Une fonction membre getType() retournant une référence constante sur type.
// • Une fonction membre setType() qui attribue à type la nouvelle valeur passée en
// paramètre.


// Maintenant, créez deux classes HumanA et HumanB. Toutes deux possèdent une
// Weapon et un name, ainsi qu’une fonction membre attack() affichant (sans les chevrons
// bien sûr) :
// <name> attacks with their <weapon type>
// HumanA et HumanB sont presque identiques, à l’exception de deux petits détails :
// • Alors que le constructeur de HumanA prend une Weapon comme paramètre, ce
// n’est pas le cas de celui de HumanB.
// • HumanB n’aura pas toujours une Weapon, tandis que HumanA en aura forcément une.
