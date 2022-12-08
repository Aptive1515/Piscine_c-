/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:55:36 by aptive            #+#    #+#             */
/*   Updated: 2022/12/07 14:25:20 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Harl.class.hpp"

void	message(std::string *levels, Harl harl, int i)
{
	while (i < 4)
	{
		std::cout << "[ " << levels[i] << " ]" << std::endl;
		harl.complain(levels[i]);
		std::cout << std::endl;
		i++;
	}
}

int	main(int argc, char **argv)
{
	Harl	harl;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i(0);

	if (argc != 2)
		return 1;
	while ( i < 4 && argv[1] != levels[i])
		i++;
	switch (i)
		{
			case 0:
				message(levels, harl, i);
				break;
			case 1:
				message(levels, harl, i);
				break;
			case 2:
				message(levels, harl, i);
				break;
			case 3:
				message(levels, harl, i);
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	return 1;
}
