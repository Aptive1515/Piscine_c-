/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:59:42 by aptive            #+#    #+#             */
/*   Updated: 2022/12/05 16:05:37 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.class.hpp"

Zombie* zombieHorde( int n, std::string name )
{
	int	i(-1);
	Zombie *z = new Zombie[n];
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
