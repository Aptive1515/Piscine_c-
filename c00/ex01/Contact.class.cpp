/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:11:14 by aptive            #+#    #+#             */
/*   Updated: 2022/06/22 01:13:57 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

Contact::Contact(void)
{
	// std::cout << "initialisation classe contact" << std::endl;
	// // int i = 0;
	// // while (i < 20)
	// // {
	// // 	// this->first_name[i] = '\0';
	// // 	// this->last_name[i] = '\0';
	// // 	i++;
	// // }
}

Contact::~Contact()
{
}

void	Contact::add_contact(void)
{
	std::cout << "Enter the first name : " << std::endl;
	std::cin >> this->first_name;
	std::cout << "Enter the last name : " << std::endl;
	std::cin >> this->last_name;
	std::cout << "Enter the nickname : " << std::endl;
	std::cin >> this->nickname;
	std::cout << "Enter the phone number : " << std::endl;
	std::cin >> this->phone_number;
	std::cout << "Enter the darkest secret : " << std::endl;
	std::cin >> this->darkest_secret;
	// std::cout << "The fist name is : " << this->first_name << std::endl;
}
