/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:09:03 by aptive            #+#    #+#             */
/*   Updated: 2022/06/22 01:07:59 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONCTACT_CLASS_HPP
# define CONCTACT_CLASS_HPP

class Contact
{
	// char darkest[20];
	public:
		char	first_name[20] = "\0";
		char	last_name[20] = "\0";
		char	nickname[20] = "\0";
		char	phone_number[20] = "\0";
		char	darkest_secret[20] = "\0";
			Contact(void);
			~Contact(void);
	void	add_contact(void);
	private:
		/* data */
};



#endif
