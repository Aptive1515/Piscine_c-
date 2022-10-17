/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:09:03 by aptive            #+#    #+#             */
/*   Updated: 2022/10/17 18:24:24 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONCTACT_CLASS_HPP
# define CONCTACT_CLASS_HPP

class Contact
{
	public:
			Contact(void);
			~Contact(void);
	void	add_contact(void);
	std::string	getstr(std::string str) const;

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};



#endif
