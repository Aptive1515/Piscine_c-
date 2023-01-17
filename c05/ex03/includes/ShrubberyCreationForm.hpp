/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:23:57 by aptive            #+#    #+#             */
/*   Updated: 2023/01/17 21:35:33 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Buraucrate.hpp"
# include "Form.hpp"

class ShrubberyCreationForm : virtual public Form
{
	public:
					ShrubberyCreationForm();
					ShrubberyCreationForm( ShrubberyCreationForm const & src );
					ShrubberyCreationForm(std::string name, std::string target);
		virtual		~ShrubberyCreationForm();

		ShrubberyCreationForm &			operator=( ShrubberyCreationForm const & rhs );
		// ** --------------------------------- METHODS ----------------------------------
		void	execute_form() const;
	private:
};

#endif
