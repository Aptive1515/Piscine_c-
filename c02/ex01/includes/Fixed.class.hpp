/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:48:58 by aptive            #+#    #+#             */
/*   Updated: 2022/11/07 20:30:33 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
				Fixed( void );
				Fixed( Fixed const & src);
				Fixed( int const nb );
				Fixed( float const f_nb );
				~Fixed( void );
		Fixed &	operator=(Fixed const & rhs);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;


	private:
		int			_rawBits;
		static int const	_bits = 8;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
