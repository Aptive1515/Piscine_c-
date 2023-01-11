/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:03:57 by aptive            #+#    #+#             */
/*   Updated: 2022/12/29 19:51:30 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.class.hpp"
# include "Brain.hpp"

class Cat : public Animal
{

	public:

						Cat();
						Cat( Cat const & src );
						~Cat();
		Cat &			operator=( Cat const & rhs );

	// ACCESSOR ---------------------------------------------

	// METHODS ----------------------------------------------
		virtual void		makeSound(void) const;
	private:
		Brain *_brain;

};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif

/* ************************************************************* Cat_H */
