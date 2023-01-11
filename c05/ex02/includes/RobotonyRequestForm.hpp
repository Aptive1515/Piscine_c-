/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotonyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:16:31 by aptive            #+#    #+#             */
/*   Updated: 2023/01/06 01:57:50 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTONYREQUESTFORM_HPP
# define ROBOTONYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <time.h>
# include <stdlib.h>
# include "Buraucrate.hpp"
# include "Form.hpp"

class RobotonyRequestForm : public Form
{
	public:
				RobotonyRequestForm();
				RobotonyRequestForm( RobotonyRequestForm const & src );
				RobotonyRequestForm(std::string name, std::string target);
				~RobotonyRequestForm();

		RobotonyRequestForm &	operator=( RobotonyRequestForm const & rhs );
		// ** --------------------------------- METHODS ----------------------------------
		void	execute_form() const;


	private:
};

// std::ostream &	operator<<( std::ostream & o, RobotonyRequestForm const & i );

#endif
