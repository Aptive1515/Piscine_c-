/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:05:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/17 17:31:43 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAIRE_HPP
# define SCALAIRE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>
# include <limits>
# include <cmath>
# include <cctype>

# define MAX 2147483647
# define MIN -2147483647

enum scalarType	{Char, Int, Float, Double, Default};

class Scalaire
{

	public:
		//  ------------------------------- CONSTRUCTOR --------------------------------

						Scalaire();
						Scalaire( Scalaire const & src );
						Scalaire(std::string value);
		//  -------------------------------- DESTRUCTOR --------------------------------

		virtual			~Scalaire();

		//  --------------------------------- OVERLOAD ---------------------------------

		Scalaire &		operator=( Scalaire const & rhs );
		// --------------------------------- METHODS ----------------------------------




		// --------------------------------- ACCESSOR ---------------------------------

		std::string		getValue() const;
		std::string		getType() const;
		int				getScalarType() const;
		char			getCharValue() const;
		int				getIntValue() const;
		float			getFloatValue() const;
		double			getDoubleValue() const;

		// ---------------------------------- ERROR -----------------------------------

		class NonDisplayable : public std::exception
		{
			const char* what() const throw()
			{
				return ("Non displayable");
			}
		};

		class Impossible : public std::exception
		{
			const char* what() const throw()
			{
				return ("Impossible");
			}
		};

	private:
		std::string		_value;
		char			_char_value;
		int				_int_value;
		float			_float_value;
		double			_double_value;
		int				_type;
		// std::string		_type;



};

std::ostream &			operator<<( std::ostream & o, Scalaire const & i );

#endif /* ******************************************************** SCALAIRE_H */
