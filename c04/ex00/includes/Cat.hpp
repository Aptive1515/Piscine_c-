/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:03:57 by aptive            #+#    #+#             */
/*   Updated: 2023/01/12 18:25:28 by tdelauna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.class.hpp"

class Cat : public Animal
{

	public:

						Cat();
						Cat( Cat const & src );
						~Cat();
		Cat &			operator=( Cat const & rhs );

	// ACCESSOR ---------------------------------------------

	// METHODS ----------------------------------------------
		void	makeSound(void) const;


};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif

/* ************************************************************* Cat_H */
