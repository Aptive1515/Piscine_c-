/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:05:55 by aptive            #+#    #+#             */
/*   Updated: 2023/01/20 20:18:36 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <algorithm>
# include <numeric>

# define GREEN "\033[1;32m"
# define RED "\033[1;31m"
# define YELLOW "\033[1;33m"
# define END "\033[0m"

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
		void	addNumber(std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end);
		int		shortestSpan( void );
		int		longestSpan( void );

	private:
		std::vector<int>	_tab_int;
		unsigned int		_len;
		/* data */
};

std::ostream &			operator<<( std::ostream & o, Span const & i );


#endif /* ******************************************************** SPAN_HPP */
