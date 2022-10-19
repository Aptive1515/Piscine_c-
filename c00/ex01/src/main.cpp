/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:45:41 by aptive            #+#    #+#             */
/*   Updated: 2022/10/19 18:08:49 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

void affichage_index(int	index)
{
	std::cout << "|         " << index;
}

void	affichage_str(char *str)
{
	int	j;

	j = -1;
	std::cout << "|" ;
	while (++j < 10 - (int)strlen(str))
		std::cout << " ";
	if ((int)strlen(str) > 10)
	{
		int k = -1;
		while (++k < 9)
			std::cout << str[k];
		std::cout << ".";
	}
	else
		std::cout << str;

}

int	main(void)
{
	PhoneBook instance;
	std::string cmd;
	int	i(0);

	while (1)
	{
		std::cout << "Entrez une commande : " << std::endl;
		getline(std::cin, cmd);
		if (std::cin.eof())
			return (0);
		if (!cmd.compare("ADD"))
		{
			instance.setRepertory(i);
			i++;
			if (i == 8)
				i = 0;
		}
		else if (!cmd.compare("SEARCH"))
		{
			instance.affichage_contact(instance.getRepertory());
			instance.affichage_index(instance.getRepertory());
		}
		else if (!cmd.compare("EXIT"))
			return (0);
		else
			std::cout << "ERROR : BAD COMMAND" << std::endl;
	}
	return (0);
}
