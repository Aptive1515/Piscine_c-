/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:05:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/19 23:26:53 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T & arg, int nb)
{

	typename T::iterator it = std::find(arg.begin(), arg.end(), nb);

	if (it != arg.end())
		return it;
	throw std::string("Error not find in the container");
}

class Span
{
	public:
	// CONSTRUCTOR --------------------------------------------------------------

				Span( void );
				Span( unsigned int len );
				Span(Span const & src);
		Span &	operator=(Span const & rhs);

	// DESTRUCTOR ---------------------------------------------------------------
				~Span( void );

	// ACCESSOR -----------------------------------------------------------------
		// std::vector::iterator get_()
		std::vector<int> getTab( void ) const;

	// METHODS ------------------------------------------------------------------

		void	addNumber(int nb);
		int		shortestSpan( void );
		int		longestSpan( void );

	private:
		std::vector<int>	_tab_int;
		unsigned int		_len;
		/* data */
};

std::ostream &			operator<<( std::ostream & o, Span const & i );


#endif /* ******************************************************** SPAN_HPP */
