/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:59:42 by aptive            #+#    #+#             */
/*   Updated: 2022/11/02 16:47:47 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"


// Ensuite, implémentez les fonctions suivantes :
// • Zombie* newZombie( std::string name );
// Crée un zombie, lui donne un nom et le retourne afin qu’il puisse être utilisé en
// dehors de la portée de la fonction.
// • void randomChump( std::string name );
// Crée un zombie, lui donne un nom et le fait se présenter.
// Quel est donc le but de l’exercice ? Vous devez déterminez dans quel cas il est plus
// judicieux d’allouer les zombies sur le tas, et dans quel autre sur la pile.
// Les zombies doivent être détruits lorsque vous n’en avez plus besoin. Le destructeur
// doit afficher un message de débug comportant le nom du zombie.


// Crée un zombie, lui donne un nom et le retourne afin qu’il puisse être utilisé en
// dehors de la portée de la fonction.
Zombie*	newZombie( std::string name )
{
	Zombie *z = new Zombie[1];
	if (!z)
		return (NULL);
	z->set_name( name );
	return (z);
}
void	randomChump( std::string name )
{
	Zombie z;
	z.set_name( name );
	z.announce();
}
// Crée un zombie, lui donne un nom et le fait se présenter.


int	main( void )
{
	Zombie	*test;

	test = newZombie("truc");
	test->announce();
	randomChump("test");
	delete[] test;
	return (0);
}
