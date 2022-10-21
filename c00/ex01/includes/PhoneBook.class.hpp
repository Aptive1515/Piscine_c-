/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:38:59 by aptive            #+#    #+#             */
/*   Updated: 2022/10/21 19:44:22 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/phone.hpp"

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook {

public:

			PhoneBook(void);
			~PhoneBook(void);
	void	contact_to_book(Contact *contact_phone);
	void	affichage_contact(Contact *contact_phone) const;
	void	affichage_index(Contact *contact_phone) const;
	void	setRepertory(int i);
	Contact	*getRepertory();

private:
	Contact	repertory[8];
	void	_affichage_index(int index) const;
	void	_affichage_str(std::string str) const;
};

#endif
