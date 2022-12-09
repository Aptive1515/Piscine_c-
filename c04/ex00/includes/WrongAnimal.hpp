/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:56:35 by aptive            #+#    #+#             */
/*   Updated: 2022/12/09 00:56:58 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

# include <iostream>


class WrongAnimal
{
	public:
				WrongAnimal(void);
				WrongAnimal(WrongAnimal const & src);
				WrongAnimal & operator=(WrongAnimal const & rhs);
				~WrongAnimal();

	std::string	getType(void) const;

	void		makeSound(void) const;

	protected:
		std::string _type;
};

std::ostream &	operator<<(std::ostream & o, WrongAnimal const & rhs);


#endif
