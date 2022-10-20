/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:45:41 by aptive            #+#    #+#             */
/*   Updated: 2022/10/18 17:04:50 by aptive           ###   ########.fr       */
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
	// if (str[0] != '\0')
	// {
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

	// }
	// else
	// 	std::cout << "|          ";

}

int	main(void)
{
	Contact contact_phone[8];
	PhoneBook phonebook;
	std::string cmd;
	int	i(0);

	phonebook.contact_to_book(contact_phone);
	while (1)
	{
		std::cin.clear();
		std::cout << "Entrez une commande : " << std::endl;
		std::cin >> cmd;
		if (std::cin.eof())
			return (0);
		if (!cmd.compare("ADD"))
		{
			contact_phone[i].add_contact();
			i++;
			if (i == 8)
				i = 0;
		}
		else if (!cmd.compare("SEARCH"))
		{
			phonebook.affichage_contact(contact_phone);
			phonebook.affichage_index(contact_phone);
		}
		else if (!cmd.compare("EXIT"))
			return (0);
		else
			std::cout << "ERROR : BAD COMMAND" << std::endl;
	}
	return (0);
}
