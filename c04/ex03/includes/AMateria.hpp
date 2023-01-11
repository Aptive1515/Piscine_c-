/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aptive <aptive@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:00:03 by aptive            #+#    #+#             */
/*   Updated: 2023/01/04 18:13:18 by aptive           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria( void );
		AMateria(std::string const & type);
		AMateria( AMateria const & type );
		virtual ~AMateria( void );

		AMateria &		operator=( AMateria const & rhs );


		// ** --------------------------------- ACCESSOR ------------------------
		std::string const & getType() const; //Returns the materia type

		// ** --------------------------------- METHODS -------------------------
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;

};

// std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ********************************************************** AMATERIA_H */
