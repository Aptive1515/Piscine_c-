/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:03:57 by aptive            #+#    #+#             */
/*   Updated: 2022/12/09 00:47:26 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

						WrongCat();
						WrongCat( WrongCat const & src );
						~WrongCat();
		WrongCat &			operator=( WrongCat const & rhs );

	// ACCESSOR ---------------------------------------------

	// METHODS ----------------------------------------------


};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif

/* ************************************************************* WrongCat_H */
