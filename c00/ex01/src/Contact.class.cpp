/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:11:14 by aptive            #+#    #+#             */
/*   Updated: 2022/10/21 15:06:27 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

Contact::Contact(void)
{
}

Contact::~Contact()
{
}

void	Contact::add_contact(void)
{
	std::cout << "Enter the first name : " << std::endl;
	std::cin >> this->_first_name;
	std::cout << "Enter the last name : " << std::endl;
	std::cin >> this->_last_name;
	std::cout << "Enter the nickname : " << std::endl;
	std::cin >> this->_nickname;
	std::cout << "Enter the phone number : " << std::endl;
	std::cin >> this->_phone_number;
	std::cout << "Enter the darkest secret : " << std::endl;
	std::cin >> this->_darkest_secret;
	
}

std::string	Contact::getstr(std::string str) const
{
	if (str.compare("_first_name"))
		return (this->_first_name);
	else if (str.compare("_last_name"))
		return (this->_last_name);
	else if (str.compare("_nickname"))
		return (this->_nickname);
	else if (str.compare("_phone_number"))
		return (this->_phone_number);
	else if (str.compare("_darkest_secret"))
		return (this->_darkest_secret);
	return (NULL);
}
