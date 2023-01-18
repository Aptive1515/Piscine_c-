/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:19:40 by aptive            #+#    #+#             */
/*   Updated: 2023/01/18 17:48:39 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Buraucrate.hpp"
# include "Form.hpp"

class PresidentialPardonForm : virtual public Form
{
	public:
					PresidentialPardonForm();
					PresidentialPardonForm( PresidentialPardonForm const & src );
					PresidentialPardonForm(std::string name, std::string target);
		virtual		~PresidentialPardonForm();

		PresidentialPardonForm &			operator=( PresidentialPardonForm const & rhs );
		// ** --------------------------------- METHODS ----------------------------------
		void	execute(Buraucrate const& executor) const;
	private:
};


#endif
