/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:19:40 by aptive            #+#    #+#             */
/*   Updated: 2023/01/06 01:48:53 by aptive           ###   ########.fr       */
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
				~PresidentialPardonForm();

		PresidentialPardonForm &			operator=( PresidentialPardonForm const & rhs );
		// ** --------------------------------- METHODS ----------------------------------
		virtual void	execute_form() const;
	private:
};

// std::ostream &	operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif
