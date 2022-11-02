/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:04:00 by aptive            #+#    #+#             */
/*   Updated: 2022/11/02 16:28:13 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

class Zombie
{
	public:
			Zombie( void );
			~Zombie( void );
	void	announce( void );
	void	set_name( std::string name);

	private:
	std::string	name;
};



#endif
