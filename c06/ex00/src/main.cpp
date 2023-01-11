/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:06:51 by aptive            #+#    #+#             */
/*   Updated: 2023/01/11 01:00:01 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scalaire.hpp"

void	verif_arg(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			throw std::string ("Invalid number of arguments !\n");
		if (!argv[1][0])
			throw std::string ("Invalid arguments !\n");
	}
	catch(const std::string execpt)
	{
		std::cerr << execpt;
		std::exit(EXIT_FAILURE);
	}
	(void)argv;
}

int main (int argc, char **argv)
{
	// std::cout << std::isdigit(int('f')) << std::endl;


	verif_arg(argc, argv);

	Scalaire	obj(argv[1]);

	std::cout << obj;

	return 0;
}

// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0
// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan
// ./convert 42.0
