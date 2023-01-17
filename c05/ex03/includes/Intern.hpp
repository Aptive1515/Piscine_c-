/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:39:10 by aptive            #+#    #+#             */
/*   Updated: 2023/01/17 21:24:13 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define END "\033[0m"

class Intern
{
	public:
						Intern( void );
						Intern( Intern const & src );
		virtual			~Intern();
		Intern &	operator=( Intern const & rhs );

	// --------------------------------- METHODS ----------------------------------
		Form*		makeForm(std::string name_form, std::string name_target);
	private:
		/* data */
};

#endif

