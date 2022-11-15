/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:40:47 by aptive            #+#    #+#             */
/*   Updated: 2022/11/05 14:58:54 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP

class Harl
{
public:
			Harl(/* args */);
			~Harl();
	void	complain( std::string level );

private:
	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );
	/* data */

};


#endif
