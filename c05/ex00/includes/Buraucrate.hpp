/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Buraucrate.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:51:25 by aptive            #+#    #+#             */
/*   Updated: 2023/01/18 15:04:07 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BURAUCRATE_HPP
# define BURAUCRATE_HPP

# include <iostream>
# include <string>

class Buraucrate
{

	public:

					Buraucrate();
					Buraucrate( Buraucrate const & src );
					Buraucrate(std::string name, unsigned int grade);
		virtual		~Buraucrate();

		Buraucrate &		operator=( Buraucrate const & rhs );

		// ** --------------------------------- METHODS ----------------------------------
		void	incrementation( void );
		void	decrementation( void );

		// ** --------------------------------- ACCESSOR ---------------------------------
		std::string	getName() const;
		unsigned int			getGrade() const;

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
		std::string	const	_name;
		unsigned int		_grade;
};

std::ostream &			operator<<( std::ostream & o, Buraucrate const & i );

#endif /* ****************************************************** BURAUCRATE_H */
