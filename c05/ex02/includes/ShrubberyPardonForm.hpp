/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:23:57 by aptive            #+#    #+#             */
/*   Updated: 2023/01/06 01:53:57 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYPARDONFORM_HPP
# define SHRUBBERYPARDONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Buraucrate.hpp"
# include "Form.hpp"

class ShrubberyPardonForm : virtual public Form
{
	public:
				ShrubberyPardonForm();
				ShrubberyPardonForm( ShrubberyPardonForm const & src );
				ShrubberyPardonForm(std::string name, std::string target);
				~ShrubberyPardonForm();

		ShrubberyPardonForm &			operator=( ShrubberyPardonForm const & rhs );
		// ** --------------------------------- METHODS ----------------------------------
		void	execute_form() const;
	private:
};

#endif
