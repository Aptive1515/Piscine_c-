/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:24:28 by aptive            #+#    #+#             */
/*   Updated: 2022/11/03 20:35:09 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Weapon.hpp"

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

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
