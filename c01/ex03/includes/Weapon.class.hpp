/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:24:28 by aptive            #+#    #+#             */
/*   Updated: 2022/12/05 16:11:18 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

# include <iostream>
# include <string.h>
# include <cstdlib>

class Weapon
{
	public:
						Weapon( void );
						Weapon( std::string str);
						~Weapon( void );
		void			setType( std::string str );
		std::string&	getType( void );

	private:
		std::string	_type;
};

#endif
