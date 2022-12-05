/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:04:00 by aptive            #+#    #+#             */
/*   Updated: 2022/12/05 16:01:15 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>
# include <string.h>
# include <cstdlib>

class Zombie
{
	public:
			Zombie( void );
			~Zombie( void );
	void	announce( void );
	void	set_name( std::string name);

	private:
	std::string	_name;
};



#endif
