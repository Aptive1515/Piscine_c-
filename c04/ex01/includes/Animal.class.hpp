/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdelauna <tdelauna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:35:44 by aptive            #+#    #+#             */
/*   Updated: 2023/01/13 15:23:48 by tdelauna         ###   ########.fr       */
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

	virtual void		makeSound(void) const;

	protected:
		std::string _type;
};

std::ostream &	operator<<(std::ostream & o, Animal const & rhs);


#endif
