/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:53:11 by aptive            #+#    #+#             */
/*   Updated: 2022/10/17 17:43:28 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>



int	main(int ac, char **av)
{
	int	i(0);
	int j;

	(void)av;
	if(ac > 1)
	{
		while (av[++i])
		{
			j = -1;
			while(av[i][++j])
				av[i][j] = std::toupper(av[i][j]);
			std::cout << av[i];
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (1);
}
