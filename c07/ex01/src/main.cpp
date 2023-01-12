/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:06:51 by aptive            #+#    #+#             */
/*   Updated: 2023/01/12 01:19:28 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"


int	main ( void )
{
	std::cout << "-------------------- tab string ----------------" << std::endl;
	std::string tab[] = {"salut", "ca va"};
	iter<std::string>(tab, 2, affiche<std::string>);

	std::cout << "-------------------- tab int ----------------" << std::endl;
	int	tab_int[] = {1 , 2 , 3};
	iter<int>(tab_int, sizeof(tab_int) / sizeof(*tab_int), affiche<int>);

	return 0;

}





