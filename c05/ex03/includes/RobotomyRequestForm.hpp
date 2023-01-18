/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 00:16:31 by aptive            #+#    #+#             */
/*   Updated: 2023/01/18 17:48:34 by tdelauna         ###   ########.fr       */
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
# include <time.h>

class RobotomyRequestForm : public Form
{
	public:
					RobotomyRequestForm();
					RobotomyRequestForm( RobotomyRequestForm const & src );
					RobotomyRequestForm(std::string name, std::string target);
		virtual		~RobotomyRequestForm();

		RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );
		// ** --------------------------------- METHODS ----------------------------------
		void	execute(Buraucrate const& executor) const;


	private:
};


#endif
