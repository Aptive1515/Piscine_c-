/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:22:10 by aptive            #+#    #+#             */
/*   Updated: 2023/01/04 18:21:32 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "MateriaSource.hpp"

class Character : public ICharacter
{

	public:

		Character( void );
		Character (std::string name);
		Character( Character const & src );
		Character &		operator=( Character const & rhs );

		~Character( void );

		// ** --------------------------------- METHODS -------------------------
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria*	_materia[4];

};

#endif /* ******************************************************* CHARACTER_H */
