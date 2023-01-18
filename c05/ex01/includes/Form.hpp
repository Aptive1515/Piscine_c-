/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:46:00 by aptive            #+#    #+#             */
/*   Updated: 2023/01/18 15:46:53 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Buraucrate.hpp"

class Buraucrate;

class Form
{

	public:

						Form();
						Form( Form const & src );
						Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec);
		virtual			~Form();

		Form &			operator=( Form const & rhs );

		// ** --------------------------------- METHODS ----------------------------------
		void			besigned(Buraucrate bureaucrate);

		// ** --------------------------------- ACCESSOR ---------------------------------
		std::string		getName() const;
		bool			getSign() const;
		unsigned int	getGradeToSign() const;
		unsigned int	getGradeToExec() const;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too hight");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too low");
			}
	};

	private:
		std::string const	_name;
		bool				_sign;
		unsigned int const	_gradeToSign;
		unsigned int const	_gradeToExec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif
