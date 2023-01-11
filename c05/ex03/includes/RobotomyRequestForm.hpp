/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:16:31 by aptive            #+#    #+#             */
/*   Updated: 2023/01/06 15:54:26 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <time.h>
# include <stdlib.h>
# include "Buraucrate.hpp"
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
				RobotomyRequestForm();
				RobotomyRequestForm( RobotomyRequestForm const & src );
				RobotomyRequestForm(std::string name, std::string target);
				~RobotomyRequestForm();

		RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );
		// ** --------------------------------- METHODS ----------------------------------
		void	execute_form() const;


	private:
};

// std::ostream &	operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif
