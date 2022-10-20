/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:45:41 by aptive            #+#    #+#             */
/*   Updated: 2022/10/20 15:40:03 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phone.hpp"

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
	PhoneBook phonebook;
	std::string cmd;
	int	i(0);

	phonebook.contact_to_book(phonebook.getRepertory());
	while (1)
	{
		std::cin.clear();
		std::cout << "Entrez une commande : " << std::endl;
		getline(std::cin, cmd);
		if (std::cin.eof())
			return (0);
		if (!cmd.compare("ADD"))
		{
			phonebook.setRepertory(i);
			i++;
			if (i == 8)
				i = 0;
			std::cin.clear();
		}
		else if (!cmd.compare("SEARCH"))
		{
			phonebook.affichage_contact(phonebook.getRepertory());
			phonebook.affichage_index(phonebook.getRepertory());
		}
		else if (!cmd.compare("EXIT"))
			return (0);
		else
			std::cout << "ERROR : BAD COMMAND" << std::endl;
	}
	return (0);
}
