/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:55:36 by aptive            #+#    #+#             */
/*   Updated: 2022/11/05 15:21:36 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Harl.class.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
		return 1;

	harl.complain(argv[1]);
	return 1;
}
