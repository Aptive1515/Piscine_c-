/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:46:00 by aptive            #+#    #+#             */
/*   Updated: 2023/01/06 01:48:17 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Buraucrate.hpp"

class Form
{

	public:

						Form();
						Form( Form const & src );
						Form(std::string name, std::string target, unsigned int gradeToSign, unsigned int gradeToExec);
		virtual			~Form();

		Form &			operator=( Form const & rhs );

		// ** --------------------------------- METHODS ----------------------------------
		void	besigned(Buraucrate bureaucrate);
		void			execute(Buraucrate const& executor) const;
		virtual void	execute_form() const = 0;
		// virtual void	execute(Buraucrate const & executor) const = 0;

		// ** --------------------------------- ACCESSOR ---------------------------------
		std::string		getName() const;
		std::string		getTarget() const;
		bool			getSign() const;
		unsigned int	getGradeToSign() const;
		unsigned int	getGradeToExec() const;


	protected:
		std::string		_name;
		std::string		_target;
		bool			_sign;
		unsigned int	_gradeToSign;
		unsigned int	_gradeToExec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif
