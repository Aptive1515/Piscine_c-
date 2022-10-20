/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:38:59 by aptive            #+#    #+#             */
/*   Updated: 2022/10/18 16:18:21 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/phone.hpp"

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook {

public:
	Contact	repertory[8];

			PhoneBook(void);
			~PhoneBook(void);
	void	contact_to_book(Contact *contact_phone);
	void	affichage_contact(Contact *contact_phone) const;
	void	affichage_index(Contact *contact_phone) const;

private:
	void	_affichage_index(int index) const;
	void	_affichage_str(std::string str) const;
};

#endif
