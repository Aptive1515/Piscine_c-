/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:35:44 by aptive            #+#    #+#             */
/*   Updated: 2022/12/29 19:24:41 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define END "\033[0m"

class Animal
{
	public:
				Animal(void);
				Animal(Animal const & src);
				Animal & operator=(Animal const & rhs);
	virtual		~Animal();

	std::string	getType(void) const;

	void		makeSound(void) const;

	protected:
		std::string _type;
};

std::ostream &	operator<<(std::ostream & o, Animal const & rhs);


#endif
