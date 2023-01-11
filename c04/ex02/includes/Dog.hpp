/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:03:57 by aptive            #+#    #+#             */
/*   Updated: 2022/12/29 19:51:14 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.class.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

					Dog();
					Dog( Dog const & src );
					~Dog();
		Dog &		operator=( Dog const & rhs );

	virtual void		makeSound(void) const;

	private:
		Brain *_brain;
	// Getteur
};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */
