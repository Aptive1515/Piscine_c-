/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:59:42 by aptive            #+#    #+#             */
/*   Updated: 2022/12/05 15:58:46 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.class.hpp"


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

int	main( void )
{
	Zombie	*test;

	test = newZombie("truc");
	test->announce();
	randomChump("test");
	delete[] test;
	return (0);
}
