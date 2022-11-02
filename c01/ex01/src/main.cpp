/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:59:42 by aptive            #+#    #+#             */
/*   Updated: 2022/11/02 18:11:48 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

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

// Cette fonction doit allouer N objets Zombie en une seule allocation. Ensuite, elle doit
// initialiser les zombies en donnant à chacun le nom passé en paramètre. Elle retourne un
// pointeur sur le premier zombie.
// Écrivez vos propres tests afin de vous assurer que votre fonction zombieHorde() se
// comporte comme demandé. Essayez d’appeler announce() pour chacun des zombies.
// N
Zombie* zombieHorde( int n, std::string name )
{
	int	i(-1);
	Zombie *z = new Zombie[n + 1];
	while (++i < n)
		z[i].set_name(name);
	return (z);
}

int	main( void )
{
	Zombie	*test;
	int	i(-1);
	test = zombieHorde(10, "name");
	while (++i < 10)
		test[i].announce();
	delete[] test;
	return (0);
}
