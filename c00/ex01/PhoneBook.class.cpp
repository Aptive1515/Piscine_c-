/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:41:13 by aptive            #+#    #+#             */
/*   Updated: 2022/06/22 01:19:58 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"


PhoneBook::PhoneBook(void){
	// std::cout << "Constructor called Phonebook" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void){
	// std::cout << "Destructor called" << std::endl;
	return;
}
void PhoneBook::contact_to_book(Contact *contact_phone)
{
	int	i = -1;

	while (++i < 8)
		this->repertory[i] = contact_phone[i];
	return;
}

void	PhoneBook::_affichage_index(int	index) const
{
	std::cout << "|         " << index;
}

void	PhoneBook::_affichage_str(char *str) const
{
	int	j;

	j = -1;
	std::cout << "|";
	// std::cout << std::endl << "strlen :" << strlen(str) << std::endl;
	if (str[0] != '\0')
	{
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
	else
		std::cout << "          ";

}

void PhoneBook::affichage_contact(Contact *contact_phone) const
{
	int	i;


	i = -1;
	std::cout << "|*****INDEX|First Name|*Last Name|**Nickname|" << std::endl;
	while (++i < 8)
	{
		_affichage_index(i);
		_affichage_str(contact_phone[i].first_name);
		_affichage_str(contact_phone[i].last_name);
		_affichage_str(contact_phone[i].nickname);
		// std::cout << "|          ";
		// std::cout << "|          ";
		std::cout << "|";
		std::cout << std::endl;
	}
	return;
}

void	PhoneBook::affichage_index(Contact *contact_phone) const
{
	int	i;
	std::cout << "Entrer l'index : " << std::endl;
	std::cin >> i;

	if (i < 0 || i > 7)
		std::cout << "Error : Mauvais index" << std::endl;
	else
	{
		std::cout << "First name : " << contact_phone[i].first_name << std::endl;
		std::cout << "Last name : " << contact_phone[i].last_name << std::endl;
		std::cout << "Nickname : " << contact_phone[i].nickname << std::endl;
		std::cout << "Phone number : " << contact_phone[i].phone_number << std::endl;
		std::cout << "Darkest_secret : " << contact_phone[i].darkest_secret << std::endl;
	}
	return;
}

void	PhoneBook::fonction(void){
	std::cout << "Utilisation de la fonction Fonction" << std::endl;
	return;
}
